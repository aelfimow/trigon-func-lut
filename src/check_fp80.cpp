#include "check_fp80.h"

#include "types.h"
#include "sin_lut_fp80.h"
#include "cos_lut_fp80.h"
#include "tan_lut_fp80.h"
#include "cot_lut_fp80.h"
#include "degree_to_rad.h"

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

    std::vector<fp80> radians;
    radians.reserve(degrees.size());

    for (auto const degree: degrees)
    {
        fp80 const rad = degree_to_rad::to_rad_l(degree);

        radians.push_back(rad);
    }

    for (size_t i = 0U; i < degrees.size(); ++i)
    {
        fp80 const a = sinl(radians[i]);

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

    std::vector<fp80> radians;
    radians.reserve(degrees.size());

    for (auto const degree: degrees)
    {
        fp80 const rad = degree_to_rad::to_rad_l(degree);

        radians.push_back(rad);
    }

    for (size_t i = 0U; i < degrees.size(); ++i)
    {
        fp80 const a = cosl(radians[i]);

        fp80 const b = cos_lut_fp80::lut[degrees[i]]();

        fp80 const diff = fabsl(a - b);

        if (diff > macheps)
        {
            std::cout << "cos_lut_fp80, " << degrees[i] << ": " << diff << std::endl;
        }
    }
}

void check_fp80::check_tan()
{
    std::vector<unsigned int> degrees(tan_lut_fp80::MAX_LUT_ELEM);
    std::iota(degrees.begin(), degrees.end(), 0U);

    std::vector<fp80> radians;
    radians.reserve(degrees.size());

    for (auto const degree: degrees)
    {
        fp80 const rad = degree_to_rad::to_rad_l(degree);

        radians.push_back(rad);
    }

    for (size_t i = 0U; i < degrees.size(); ++i)
    {
        fp80 const a = tanl(radians[i]);

        fp80 const b = tan_lut_fp80::lut[degrees[i]]();

        fp80 const diff = fabsl(a - b);

        if (diff > macheps)
        {
            std::cout << "tan_lut_fp80, " << degrees[i] << ": " << diff << std::endl;
        }
    }
}

void check_fp80::check_cot()
{
    std::vector<unsigned int> degrees(cot_lut_fp80::MAX_LUT_ELEM);
    std::iota(degrees.begin(), degrees.end(), 0U);

    std::vector<fp80> radians;
    radians.reserve(degrees.size());

    for (auto const degree: degrees)
    {
        fp80 const rad = degree_to_rad::to_rad_l(degree);

        radians.push_back(rad);
    }

    auto cot = [](fp80 x) -> fp80
    {
        return (cosl(x) / sinl(x));
    };

    for (size_t i = 0U; i < degrees.size(); ++i)
    {
        fp80 const a = cot(radians[i]);

        fp80 const b = cot_lut_fp80::lut[degrees[i]]();

        fp80 const diff = fabsl(a - b);

        if (diff > macheps)
        {
            std::cout << "cot_lut_fp80, " << degrees[i] << ": " << diff << std::endl;
        }
    }
}
