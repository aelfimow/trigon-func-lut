#include <iostream>
#include <sstream>
#include <stdexcept>
#include <vector>
#include <cmath>
#include <numeric>
#include "sin_lut_fp32.h"
#include "cos_lut_fp32.h"
#include "tan_lut_fp32.h"

using fp32 = float;
static_assert(sizeof(fp32) == 4U);

using fp64 = double;
static_assert(sizeof(fp64) == 8U);

using fp80 = long double;
static_assert(sizeof(fp80) >= 10U);

using fp128 = __float128;
static_assert(sizeof(fp128) == 16U);

namespace fp32data
{
    fp32 const pi = 3.1415926535897932384626433832795f;
    fp32 const macheps = 5.96046E-08f;
}

namespace
{
    void check_sin_lut_fp32()
    {
        std::vector<unsigned int> degrees(sin_lut_fp32::MAX_LUT_ELEM);
        std::iota(degrees.begin(), degrees.end(), 0U);

        std::vector<fp32> radian_fp32;
        radian_fp32.reserve(degrees.size());

        for (auto const degree: degrees)
        {
            fp32 const value_fp32 = ((2.0f * fp32data::pi * static_cast<fp32>(degree)) / 360.0f);

            radian_fp32.push_back(value_fp32);
        }

        for (size_t i = 0U; i < degrees.size(); ++i)
        {
            fp32 const a = sinf(radian_fp32[i]);

            fp32 const b = sin_lut_fp32::lut[degrees[i]]();

            fp32 const diff = fabsf(a - b);

            if (diff > fp32data::macheps)
            {
                std::cout << "sin_lut_fp32, " << degrees[i] << ": " << diff << std::endl;
            }
        }
    }

    void check_cos_lut_fp32()
    {
        std::vector<unsigned int> degrees(cos_lut_fp32::MAX_LUT_ELEM);
        std::iota(degrees.begin(), degrees.end(), 0U);

        std::vector<fp32> radian_fp32;
        radian_fp32.reserve(degrees.size());

        for (auto const degree: degrees)
        {
            fp32 const value_fp32 = ((2.0f * fp32data::pi * static_cast<fp32>(degree)) / 360.0f);

            radian_fp32.push_back(value_fp32);
        }

        for (size_t i = 0U; i < degrees.size(); ++i)
        {
            fp32 const a = cosf(radian_fp32[i]);

            fp32 const b = cos_lut_fp32::lut[degrees[i]]();

            fp32 const diff = fabsf(a - b);

            if (diff > fp32data::macheps)
            {
                std::cout << "cos_lut_fp32, " << degrees[i] << ": " << diff << std::endl;
            }
        }
    }

    void check_tan_lut_fp32()
    {
        std::vector<unsigned int> degrees(tan_lut_fp32::MAX_LUT_ELEM);
        std::iota(degrees.begin(), degrees.end(), 0U);

        std::vector<fp32> radian_fp32;
        radian_fp32.reserve(degrees.size());

        for (auto const degree: degrees)
        {
            fp32 const value_fp32 = ((2.0f * fp32data::pi * static_cast<fp32>(degree)) / 360.0f);

            radian_fp32.push_back(value_fp32);
        }

        for (size_t i = 0U; i < degrees.size(); ++i)
        {
            fp32 const a = tanf(radian_fp32[i]);

            fp32 const b = tan_lut_fp32::lut[degrees[i]]();

            fp32 const diff = fabsf(a - b);

            if (diff > fp32data::macheps)
            {
                std::cout << "tan_lut_fp32, " << degrees[i] << ": " << diff << std::endl;
            }
        }
    }
}

int main(int, char **)
try
{
    check_sin_lut_fp32();
    check_cos_lut_fp32();
    check_tan_lut_fp32();

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
