#include "check_fp128.h"

#include "types.h"
#include "sin_lut_fp128.h"
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
