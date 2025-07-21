#include <iostream>
#include <cmath>    //header file for additional mathematical functions

int main() {

    double x = 3;
    double y = 4;
    double z = 3.14;

    double max;
    double min;
    double exponant;
    double squareroot;
    double absolute;
    double rounded;
    double ceiling;
    double flooring;

    max = std::max(x, y);   //compares values: outputs the higher value
    min = std::min(x, y);   //                 outputs the lower value

    //need cmath header for the following functions

    exponant = pow(2, 3);      //exponant function (2 to the power of 3)
    squareroot = sqrt(9);      //square root
    absolute = abs(-10);       //absoulte value (how far away from 0 is it)
    rounded = round(z);        //rounding (to nearest integer)
    ceiling = ceil(z);         //round upwards
    flooring = floor(z);       //round downwards

    std::cout << max <<'\n';
    std::cout << min <<'\n';
    std::cout << exponant <<'\n';
    std::cout << squareroot <<'\n';
    std::cout << absolute <<'\n';
    std::cout << rounded <<'\n';
    std::cout << ceiling <<'\n';
    std::cout << flooring;

    return 0;
}

// https://cplusplus.com/reference/cmath/ for more functions!