#ifndef math_functions
#define math_functions

#include <iostream>
#include <vector>

double pi();

double f(double x);
double intg(double lower_end, double high_end);

void solve_i(double a, double b, double space);
void solve_dt_i(double a, double b, double space);


void solve_d(double point, double h);
void solve_dt_d(double a, double b, double h);

#endif
