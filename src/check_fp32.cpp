#include "check_fp32.h"

#include "types.h"
#include "sin_lut_fp32.h"
#include "cos_lut_fp32.h"
#include "tan_lut_fp32.h"
#include "cot_lut_fp32.h"
#include "degree_to_rad.h"

#include <iostream>
#include <vector>
#include <cmath>
#include <numeric>


namespace check_fp32
{
    fp32 const macheps = 5.96046E-08f;
}

void check_fp32::check_sin()
{
    std::vector<unsigned int> degrees(sin_lut_fp32::MAX_LUT_ELEM);
    std::iota(degrees.begin(), degrees.end(), 0U);

    std::vector<fp32> radian_fp32;
    radian_fp32.reserve(degrees.size());

    for (auto const degree: degrees)
    {
        fp32 const value_fp32 = degree_to_rad::to_rad_f(degree);

        radian_fp32.push_back(value_fp32);
    }

    for (size_t i = 0U; i < degrees.size(); ++i)
    {
        fp32 const a = sinf(radian_fp32[i]);

        fp32 const b = sin_lut_fp32::lut[degrees[i]]();

        fp32 const diff = fabsf(a - b);

        if (diff > macheps)
        {
            std::cout << "sin_lut_fp32, " << degrees[i] << ": " << diff << std::endl;
        }
    }
}

void check_fp32::check_cos()
{
    std::vector<unsigned int> degrees(cos_lut_fp32::MAX_LUT_ELEM);
    std::iota(degrees.begin(), degrees.end(), 0U);

    std::vector<fp32> radian_fp32;
    radian_fp32.reserve(degrees.size());

    for (auto const degree: degrees)
    {
        fp32 const value_fp32 = degree_to_rad::to_rad_f(degree);

        radian_fp32.push_back(value_fp32);
    }

    for (size_t i = 0U; i < degrees.size(); ++i)
    {
        fp32 const a = cosf(radian_fp32[i]);

        fp32 const b = cos_lut_fp32::lut[degrees[i]]();

        fp32 const diff = fabsf(a - b);

        if (diff > macheps)
        {
            std::cout << "cos_lut_fp32, " << degrees[i] << ": " << diff << std::endl;
        }
    }
}

void check_fp32::check_tan()
{
    std::vector<unsigned int> degrees(tan_lut_fp32::MAX_LUT_ELEM);
    std::iota(degrees.begin(), degrees.end(), 0U);

    std::vector<fp32> radian_fp32;
    radian_fp32.reserve(degrees.size());

    for (auto const degree: degrees)
    {
        fp32 const value_fp32 = degree_to_rad::to_rad_f(degree);

        radian_fp32.push_back(value_fp32);
    }

    for (size_t i = 0U; i < degrees.size(); ++i)
    {
        fp32 const a = tanf(radian_fp32[i]);

        fp32 const b = tan_lut_fp32::lut[degrees[i]]();

        fp32 const diff = fabsf(a - b);

        if (diff > macheps)
        {
            std::cout << "tan_lut_fp32, " << degrees[i] << ": " << diff << std::endl;
        }
    }
}

void check_fp32::check_cot()
{
    std::vector<unsigned int> degrees(cot_lut_fp32::MAX_LUT_ELEM);
    std::iota(degrees.begin(), degrees.end(), 0U);

    std::vector<fp32> radian_fp32;
    radian_fp32.reserve(degrees.size());

    for (auto const degree: degrees)
    {
        fp32 const value_fp32 = degree_to_rad::to_rad_f(degree);

        radian_fp32.push_back(value_fp32);
    }

    auto cotf = [](fp32 x) -> fp32
    {
#if 1
        return (cosf(x) / sinf(x));
#endif
#if 0
        return (1.0f / tanf(x));
#endif
    };

    for (size_t i = 0U; i < degrees.size(); ++i)
    {
        fp32 const a = cotf(radian_fp32[i]);

        fp32 const b = cot_lut_fp32::lut[degrees[i]]();

        fp32 const diff = fabsf(a - b);

        if (diff > macheps)
        {
            std::cout << "cot_lut_fp32, " << degrees[i] << ": " << diff << std::endl;
        }
    }
}
