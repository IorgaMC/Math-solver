#include <iostream>
#include "math_functions.h"
#include <cmath>
#include <numbers>

 //////////////////////////////////////////////// DASH BOARD ////////////////////////////////////////////////

double f(double x) {
    // FUNCTION

    return sin(x)*exp(x)*x;
}

bool
intrg = true,
deriv = false,
mk_dt_i=true,
mk_dt_d=false;

double
// Integral constants

low_i = 25,
high_i = 48,
space = 0.0001,

// Derivative constants

low_d = 0,
high_d = 1,
point = pi(),
h = 1e-4;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main() {
    clock_t start = clock();

    if (mk_dt_i) solve_dt_i(low_i, high_i, space); // makes data frame for integral (csv form)
    if (intrg)  solve_i(low_i, high_i, space); //solves integral
    if (mk_dt_d) solve_dt_d(low_d, high_d, h); //makes data frame for derivative (csv form)
    if (deriv)  solve_d(point, h); //solves derivative

    std::cout << "Time of run:" <<static_cast<double>(clock() - start) / CLOCKS_PER_SEC << '\n'; //shows how long it tooks
    return 0;
}
