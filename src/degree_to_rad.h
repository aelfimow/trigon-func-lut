#ifdef DEGREE_TO_RAD_H
#error Already included
#else

#define DEGREE_TO_RAD_H  1

namespace degree_to_rad
{
    extern fp32 to_rad_f(unsigned int value);
    extern fp64 to_rad(unsigned int value);
    extern fp80 to_rad_l(unsigned int value);
    extern fp128 to_rad_q(unsigned int value);
}

#endif
