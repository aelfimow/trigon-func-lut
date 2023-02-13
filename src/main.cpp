#include <iostream>
#include <sstream>
#include <stdexcept>
#include <vector>
#include <cmath>
#include <numeric>
#include "sin_lut_fp32.h"
#include "cos_lut_fp32.h"

using fp32 = float;
static_assert(sizeof(fp32) == 4U);

using fp64 = double;
static_assert(sizeof(fp64) == 8U);

using fp80 = long double;
static_assert(sizeof(fp80) >= 10U);

using fp128 = __float128;
static_assert(sizeof(fp128) == 16U);

int main(int, char **)
try
{
    fp32 const pi = 3.1415926535897932384626433832795f;

    std::vector<unsigned int> degrees(361U);    // from 0 to 360
    std::iota(degrees.begin(), degrees.end(), 0U);

    std::vector<fp32> radian_fp32;
    radian_fp32.reserve(degrees.size());

    for (auto const degree: degrees)
    {
        fp32 const value_fp32 = ((2.0f * pi * static_cast<fp32>(degree)) / 360.0f);

        radian_fp32.push_back(value_fp32);
    }

    for (size_t i = 0U; i < degrees.size(); ++i)
    {
        fp32 const a = sinf(radian_fp32[i]);

        fp32 const b = sin_lut_fp32::lut[degrees[i]]();

        fp32 const diff = fabsf(a - b);

        fp32 const eps = 1E-9f;

        if (diff >= eps)
        {
            std::cout << "sin_lut_fp32, " << degrees[i] << ": " << diff << std::endl;
        }
    }

    return EXIT_SUCCESS;
}
catch (std::exception &exc)
{
    std::cerr << "Exception: " << exc.what() << std::endl;
    return EXIT_FAILURE;
}
catch (...)
{
    std::cerr << "Error: exception" << std::endl;
    return EXIT_FAILURE;
}
