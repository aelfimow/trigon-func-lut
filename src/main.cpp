#include <iostream>
#include <sstream>
#include <stdexcept>
#include <vector>
#include <cmath>
#include <numeric>
#include <numbers>
#include "types.h"
#include "sin_lut_fp32.h"
#include "sin_lut_fp64.h"
#include "cos_lut_fp32.h"
#include "cos_lut_fp64.h"
#include "tan_lut_fp32.h"
#include "cot_lut_fp32.h"

namespace fp32data
{
    fp32 const macheps = 5.96046E-08f;
}

namespace fp64data
{
    fp64 const macheps = 1.11022e-16;
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
            fp32 const value_fp32 = ((2.0f * std::numbers::pi_v<fp32> * static_cast<fp32>(degree)) / 360.0f);

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

    void check_sin_lut_fp64()
    {
        std::vector<unsigned int> degrees(sin_lut_fp64::MAX_LUT_ELEM);
        std::iota(degrees.begin(), degrees.end(), 0U);

        std::vector<fp64> radian_fp64;
        radian_fp64.reserve(degrees.size());

        for (auto const degree: degrees)
        {
            fp64 const value_fp64 = ((2.0 * std::numbers::pi_v<fp64> * static_cast<fp64>(degree)) / 360.0);

            radian_fp64.push_back(value_fp64);
        }

        for (size_t i = 0U; i < degrees.size(); ++i)
        {
            fp64 const a = sin(radian_fp64[i]);

            fp64 const b = sin_lut_fp64::lut[degrees[i]]();

            fp64 const diff = fabs(a - b);

            if (diff > fp64data::macheps)
            {
                std::cout << "sin_lut_fp64, " << degrees[i] << ": " << diff << std::endl;
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
            fp32 const value_fp32 = ((2.0f * std::numbers::pi_v<fp32> * static_cast<fp32>(degree)) / 360.0f);

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

    void check_cos_lut_fp64()
    {
        std::vector<unsigned int> degrees(cos_lut_fp64::MAX_LUT_ELEM);
        std::iota(degrees.begin(), degrees.end(), 0U);

        std::vector<fp64> radian_fp64;
        radian_fp64.reserve(degrees.size());

        for (auto const degree: degrees)
        {
            fp64 const value_fp64 = ((2.0 * std::numbers::pi_v<fp64> * static_cast<fp64>(degree)) / 360.0);

            radian_fp64.push_back(value_fp64);
        }

        for (size_t i = 0U; i < degrees.size(); ++i)
        {
            fp64 const a = cos(radian_fp64[i]);

            fp64 const b = cos_lut_fp64::lut[degrees[i]]();

            fp64 const diff = fabs(a - b);

            if (diff > fp64data::macheps)
            {
                std::cout << "cos_lut_fp64, " << degrees[i] << ": " << diff << std::endl;
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
            fp32 const value_fp32 = ((2.0f * std::numbers::pi_v<fp32> * static_cast<fp32>(degree)) / 360.0f);

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

    fp32 cotf(fp32 x)
    {
#if 1
        return (cosf(x) / sinf(x));
#endif
#if 0
        return (1.0f / tanf(x));
#endif
    }

    void check_cot_lut_fp32()
    {
        std::vector<unsigned int> degrees(cot_lut_fp32::MAX_LUT_ELEM);
        std::iota(degrees.begin(), degrees.end(), 0U);

        std::vector<fp32> radian_fp32;
        radian_fp32.reserve(degrees.size());

        for (auto const degree: degrees)
        {
            fp32 const value_fp32 = ((2.0f * std::numbers::pi_v<fp32> * static_cast<fp32>(degree)) / 360.0f);

            radian_fp32.push_back(value_fp32);
        }

        for (size_t i = 0U; i < degrees.size(); ++i)
        {
            fp32 const a = cotf(radian_fp32[i]);

            fp32 const b = cot_lut_fp32::lut[degrees[i]]();

            fp32 const diff = fabsf(a - b);

            if (diff > fp32data::macheps)
            {
                std::cout << "cot_lut_fp32, " << degrees[i] << ": " << diff << std::endl;
            }
        }
    }
}

int main(int, char **)
try
{
    check_sin_lut_fp32();
    check_sin_lut_fp64();

    check_cos_lut_fp32();
    check_cos_lut_fp64();

    check_tan_lut_fp32();
    check_cot_lut_fp32();

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
