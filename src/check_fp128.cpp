#include "check_fp128.h"

#include "types.h"
#include "sin_lut_fp128.h"
#include "cos_lut_fp128.h"
#include "tan_lut_fp128.h"
#include "cot_lut_fp128.h"
#include "degree_to_rad.h"

#include <iostream>
#include <vector>
#include <cmath>
#include <numeric>
#include <quadmath.h>

namespace
{
    std::ostream &operator<<(std::ostream &os, fp128 value)
    {
        std::vector<char> buffer(128U);

        ::quadmath_snprintf(buffer.data(), buffer.size(), "%.36Qe", value);

        std::string const str(buffer.data());

        os << str;

        return os;
    }
}

void check_fp128::check_sin()
{
    std::vector<unsigned int> degrees(sin_lut_fp128::MAX_LUT_ELEM);
    std::iota(degrees.begin(), degrees.end(), 0U);

    std::vector<fp128> radians;
    radians.reserve(degrees.size());

    for (auto const degree: degrees)
    {
        fp128 const rad = degree_to_rad::to_rad_q(degree);

        radians.push_back(rad);
    }

    for (size_t i = 0U; i < degrees.size(); ++i)
    {
        fp128 const a = ::sinq(radians[i]);

        fp128 const b = sin_lut_fp128::lut[degrees[i]]();

        fp128 const diff = ::fabsq(a - b);

        if (diff > FLT128_EPSILON)
        {
            std::cout << "sin_lut_fp128, " << degrees[i] << ": " << diff << std::endl;
        }
    }
}

void check_fp128::check_cos()
{
    std::vector<unsigned int> degrees(cos_lut_fp128::MAX_LUT_ELEM);
    std::iota(degrees.begin(), degrees.end(), 0U);

    std::vector<fp128> radians;
    radians.reserve(degrees.size());

    for (auto const degree: degrees)
    {
        fp128 const rad = degree_to_rad::to_rad_q(degree);

        radians.push_back(rad);
    }

    for (size_t i = 0U; i < degrees.size(); ++i)
    {
        fp128 const a = ::cosq(radians[i]);

        fp128 const b = cos_lut_fp128::lut[degrees[i]]();

        fp128 const diff = ::fabsq(a - b);

        if (diff > FLT128_EPSILON)
        {
            std::cout << "cos_lut_fp128, " << degrees[i] << ": " << diff << std::endl;
        }
    }
}

void check_fp128::check_tan()
{
    std::vector<unsigned int> degrees(tan_lut_fp128::MAX_LUT_ELEM);
    std::iota(degrees.begin(), degrees.end(), 0U);

    std::vector<fp128> radians;
    radians.reserve(degrees.size());

    for (auto const degree: degrees)
    {
        fp128 const rad = degree_to_rad::to_rad_q(degree);

        radians.push_back(rad);
    }

    for (size_t i = 0U; i < degrees.size(); ++i)
    {
        fp128 const a = ::tanq(radians[i]);

        fp128 const b = tan_lut_fp128::lut[degrees[i]]();

        fp128 const diff = ::fabsq(a - b);

        if (diff > FLT128_EPSILON)
        {
            std::cout << "tan_lut_fp128, " << degrees[i] << ": " << diff << std::endl;
        }
    }
}

void check_fp128::check_cot()
{
    std::vector<unsigned int> degrees(cot_lut_fp128::MAX_LUT_ELEM);
    std::iota(degrees.begin(), degrees.end(), 0U);

    std::vector<fp128> radians;
    radians.reserve(degrees.size());

    for (auto const degree: degrees)
    {
        fp128 const rad = degree_to_rad::to_rad_q(degree);

        radians.push_back(rad);
    }

    auto cot = [](fp128 x) -> fp128
    {
        return (cosq(x) / sinq(x));
    };

    for (size_t i = 0U; i < degrees.size(); ++i)
    {
        fp128 const a = cot(radians[i]);

        fp128 const b = cot_lut_fp128::lut[degrees[i]]();

        fp128 const diff = ::fabsq(a - b);

        if (diff > FLT128_EPSILON)
        {
            std::cout << "cot_lut_fp128, " << degrees[i] << ": " << diff << std::endl;
        }
    }
}
