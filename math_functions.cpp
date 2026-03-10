#include <iostream>
#include "math_functions.h"
#include <cmath>
#include <vector>
#include <fstream>

double pi() { //makes pi
    return 2 * acos(0.0);
}

double intg(double lower_end, double high_end) { //simpson's 3/8 rule 
    double a = lower_end;
    double b = high_end;
    double h = (b - a) / 3;
    double area = 0.0;
    area = ((3 * h) / 8) * (f(a) + 3 * f((2 * a + b) / 3) + 3 * f((a + 2 * b) / 3) + f(b));
    return area;
}

void solve_i(double a, double b, double space) { //takes intg, adds the points and prints the number in the terminal
    double area = 0.0;
    for (double i = a + space; i <= b; i += space) {
        area += intg(i-space,i);
    }
    std::cout << area <<"\n";
}

void solve_dt_i(double a, double b, double space) { //makes a csv and prints all the data from intg
    std::ofstream file("/home/IMC/Code/Data/Cpp/test.csv");
    double area = 0.0;
    file << "x,y\n";
    std::vector<double> data1, data2;
    for (double i = a + space; i <= b; i += space) {
        area += intg(i - space, i);
        file << i << "," << area << "\n";
    }
}

void solve_d(double point, double h){ //derivative equation

    std::cout << (f(point + h) - f(point)) / h << "\n";
}

void solve_dt_d(double a, double b, double h) { //makes a csv and prints all the data from solve_d
    std::ofstream file("/home/marius/Code/Data/Cpp/derive.csv");
    file << "x,y\n";
    for (double i = a + h; i <= b; i += h) {
        file << i << "," << (f(i + h) - f(i)) / h << "\n";
    }
}
