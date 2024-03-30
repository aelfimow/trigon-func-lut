#include "check_fp80.h"

#include "types.h"
#include "sin_lut_fp80.h"
#include "cos_lut_fp80.h"

#include <iostream>
#include <vector>
#include <cmath>
#include <numeric>


namespace check_fp80
{
    fp80 const macheps = 5.96046E-08f;
}

void check_fp80::check_sin()
{
    std::vector<unsigned int> degrees(sin_lut_fp80::MAX_LUT_ELEM);
    std::iota(degrees.begin(), degrees.end(), 0U);

    std::vector<fp80> radian_fp80;
    radian_fp80.reserve(degrees.size());

    for (auto const degree: degrees)
    {
        fp80 const value_fp80 = ((2.0f * std::numbers::pi_v<fp80> * static_cast<fp80>(degree)) / 360.0f);

        radian_fp80.push_back(value_fp80);
    }

    for (size_t i = 0U; i < degrees.size(); ++i)
    {
        fp80 const a = sinl(radian_fp80[i]);

        fp80 const b = sin_lut_fp80::lut[degrees[i]]();

        fp80 const diff = fabsl(a - b);

        if (diff > macheps)
        {
            std::cout << "sin_lut_fp80, " << degrees[i] << ": " << diff << std::endl;
        }
    }
}

void check_fp80::check_cos()
{
    std::vector<unsigned int> degrees(cos_lut_fp80::MAX_LUT_ELEM);
    std::iota(degrees.begin(), degrees.end(), 0U);

    std::vector<fp80> radian_fp80;
    radian_fp80.reserve(degrees.size());

    for (auto const degree: degrees)
    {
        fp80 const value_fp80 = ((2.0 * std::numbers::pi_v<fp80> * static_cast<fp80>(degree)) / 360.0);

        radian_fp80.push_back(value_fp80);
    }

    for (size_t i = 0U; i < degrees.size(); ++i)
    {
        fp80 const a = cosl(radian_fp80[i]);

        fp80 const b = cos_lut_fp80::lut[degrees[i]]();

        fp80 const diff = fabsl(a - b);

        if (diff > macheps)
        {
            std::cout << "cos_lut_fp80, " << degrees[i] << ": " << diff << std::endl;
        }
    }
}
