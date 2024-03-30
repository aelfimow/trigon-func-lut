#include "check_fp64.h"

#include "types.h"
#include "sin_lut_fp64.h"
#include "cos_lut_fp64.h"
#include "tan_lut_fp64.h"
#include "cot_lut_fp64.h"
#include "degree_to_rad.h"

#include <iostream>
#include <vector>
#include <cmath>
#include <numeric>


namespace check_fp64
{
    fp64 const macheps = 1.11022e-16;
}

void check_fp64::check_sin()
{
    std::vector<unsigned int> degrees(sin_lut_fp64::MAX_LUT_ELEM);
    std::iota(degrees.begin(), degrees.end(), 0U);

    std::vector<fp64> radian_fp64;
    radian_fp64.reserve(degrees.size());

    for (auto const degree: degrees)
    {
        fp64 const value_fp64 = degree_to_rad::to_rad(degree);

        radian_fp64.push_back(value_fp64);
    }

    for (size_t i = 0U; i < degrees.size(); ++i)
    {
        fp64 const a = sin(radian_fp64[i]);

        fp64 const b = sin_lut_fp64::lut[degrees[i]]();

        fp64 const diff = fabs(a - b);

        if (diff > macheps)
        {
            std::cout << "sin_lut_fp64, " << degrees[i] << ": " << diff << std::endl;
        }
    }
}

void check_fp64::check_cos()
{
    std::vector<unsigned int> degrees(cos_lut_fp64::MAX_LUT_ELEM);
    std::iota(degrees.begin(), degrees.end(), 0U);

    std::vector<fp64> radian_fp64;
    radian_fp64.reserve(degrees.size());

    for (auto const degree: degrees)
    {
        fp64 const value_fp64 = degree_to_rad::to_rad(degree);

        radian_fp64.push_back(value_fp64);
    }

    for (size_t i = 0U; i < degrees.size(); ++i)
    {
        fp64 const a = cos(radian_fp64[i]);

        fp64 const b = cos_lut_fp64::lut[degrees[i]]();

        fp64 const diff = fabs(a - b);

        if (diff > macheps)
        {
            std::cout << "cos_lut_fp64, " << degrees[i] << ": " << diff << std::endl;
        }
    }
}

void check_fp64::check_tan()
{
    std::vector<unsigned int> degrees(tan_lut_fp64::MAX_LUT_ELEM);
    std::iota(degrees.begin(), degrees.end(), 0U);

    std::vector<fp64> radian;
    radian.reserve(degrees.size());

    for (auto const degree: degrees)
    {
        fp64 const tmp_value = degree_to_rad::to_rad(degree);

        radian.push_back(tmp_value);
    }

    for (size_t i = 0U; i < degrees.size(); ++i)
    {
        fp64 const a = tan(radian[i]);

        fp64 const b = tan_lut_fp64::lut[degrees[i]]();

        fp64 const diff = fabs(a - b);

        if (diff > macheps)
        {
            std::cout << "tan_lut_fp64, " << degrees[i] << ": " << diff << std::endl;
        }
    }
}

void check_fp64::check_cot()
{
    std::vector<unsigned int> degrees(cot_lut_fp64::MAX_LUT_ELEM);
    std::iota(degrees.begin(), degrees.end(), 0U);

    std::vector<fp64> radian;
    radian.reserve(degrees.size());

    for (auto const degree: degrees)
    {
        fp64 const tmp_value = degree_to_rad::to_rad(degree);

        radian.push_back(tmp_value);
    }

    auto cot = [](fp64 x) -> fp64
    {
        return (cos(x) / sin(x));
    };

    for (size_t i = 0U; i < degrees.size(); ++i)
    {
        fp64 const a = cot(radian[i]);

        fp64 const b = cot_lut_fp64::lut[degrees[i]]();

        fp64 const diff = fabs(a - b);

        if (diff > macheps)
        {
            std::cout << "cot_lut_fp64, " << degrees[i] << ": " << diff << std::endl;
        }
    }
}
