#include <iostream>
#include "question3.h"
#include <cmath>

bool test_config()
{
    return true;
}

double get_kinetic_energy(double kilo, double v_ity)
{
    
    // To calculate the velocity
    double val = v_ity;

    auto vel = pow( val, 2);


    // To calculate the kinetic energy
    double KE = .5 * kilo * vel;

    return KE;
}

