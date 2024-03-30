#include <iostream>
#include <stdexcept>

#include "check_fp32.h"
#include "check_fp64.h"
#include "check_fp80.h"


int main(int, char **)
try
{
    check_fp32::check_sin();
    check_fp32::check_cos();
    check_fp32::check_tan();
    check_fp32::check_cot();

    check_fp64::check_sin();
    check_fp64::check_cos();
    check_fp64::check_tan();
    check_fp64::check_cot();

    check_fp80::check_sin();
    check_fp80::check_cos();
    check_fp80::check_tan();
    check_fp80::check_cot();

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
