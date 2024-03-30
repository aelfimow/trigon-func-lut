#include "types.h"
#include "degree_to_rad.h"

#include <numbers>


fp32 degree_to_rad::to_rad_f(unsigned int value)
{
    fp32 const grad = static_cast<fp32>(value);

    return ((2.0f * std::numbers::pi_v<fp32> * grad) / 360.0f);
}

fp64 degree_to_rad::to_rad(unsigned int value)
{
    fp64 const grad = static_cast<fp64>(value);

    return ((2.0 * std::numbers::pi_v<fp64> * grad) / 360.0);
}

fp80 degree_to_rad::to_rad_l(unsigned int value)
{
    fp80 const grad = static_cast<fp80>(value);

    return ((2.0l * std::numbers::pi_v<fp80> * grad) / 360.0l);
}
