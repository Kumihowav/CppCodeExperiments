#include <iostream>

int main() {
    // prevents changing of a variable (all caps standard convention)
    // works with all variable datatypes
    // essentially read-only information

    const double PI = 3.14159;      

    double radius = 10;
    double circumference = 2 * PI * radius;     // multiplication of variables

    std::cout << circumference;

    return 0;
}