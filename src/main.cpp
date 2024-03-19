#include <iostream>
#include <sstream>
#include <stdexcept>
#include <vector>
#include <cmath>
#include <numeric>
#include <numbers>
#include "types.h"
#include "sin_lut_fp64.h"
#include "cos_lut_fp64.h"
#include "tan_lut_fp64.h"
#include "cot_lut_fp64.h"
#include "check_fp32.h"

namespace fp64data
{
    fp64 const macheps = 1.11022e-16;

    void check_sin_lut()
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

    void check_cos_lut()
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

    void check_tan_lut()
    {
        std::vector<unsigned int> degrees(tan_lut_fp64::MAX_LUT_ELEM);
        std::iota(degrees.begin(), degrees.end(), 0U);

        std::vector<fp64> radian;
        radian.reserve(degrees.size());

        for (auto const degree: degrees)
        {
            fp64 const tmp_value = ((2.0 * std::numbers::pi_v<fp64> * static_cast<fp64>(degree)) / 360.0);

            radian.push_back(tmp_value);
        }

        for (size_t i = 0U; i < degrees.size(); ++i)
        {
            fp64 const a = tan(radian[i]);

            fp64 const b = tan_lut_fp64::lut[degrees[i]]();

            fp64 const diff = fabs(a - b);

            if (diff > fp64data::macheps)
            {
                std::cout << "tan_lut_fp64, " << degrees[i] << ": " << diff << std::endl;
            }
        }
    }

    fp64 cot(fp64 x)
    {
        return (cos(x) / sin(x));
    }

    void check_cot_lut()
    {
        std::vector<unsigned int> degrees(cot_lut_fp64::MAX_LUT_ELEM);
        std::iota(degrees.begin(), degrees.end(), 0U);

        std::vector<fp64> radian;
        radian.reserve(degrees.size());

        for (auto const degree: degrees)
        {
            fp64 const tmp_value = ((2.0 * std::numbers::pi_v<fp64> * static_cast<fp64>(degree)) / 360.0);

            radian.push_back(tmp_value);
        }

        for (size_t i = 0U; i < degrees.size(); ++i)
        {
            fp64 const a = cot(radian[i]);

            fp64 const b = cot_lut_fp64::lut[degrees[i]]();

            fp64 const diff = fabs(a - b);

            if (diff > fp64data::macheps)
            {
                std::cout << "cot_lut_fp64, " << degrees[i] << ": " << diff << std::endl;
            }
        }
    }
}

int main(int, char **)
try
{
    check_fp32::check_sin();
    check_fp32::check_cos();
    check_fp32::check_tan();
    check_fp32::check_cot();

    fp64data::check_sin_lut();
    fp64data::check_cos_lut();
    fp64data::check_tan_lut();
    fp64data::check_cot_lut();

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
