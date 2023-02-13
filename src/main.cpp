#include <iostream>
#include <sstream>
#include <stdexcept>
#include <map>
#include "sin_lut_fp32.h"

int main(int argc, char *argv[])
try
{
    if (argc != 2)
    {
        throw std::invalid_argument("Usage: trigon sin|cos|tan|cot angle");
    }

    std::string const func { argv[1] };

    size_t angle = 0U;
    {
        std::stringstream ss { argv[2] };
        ss >> angle;
    }

    std::cout << "Function: " << func << " " << angle << std::endl;

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
