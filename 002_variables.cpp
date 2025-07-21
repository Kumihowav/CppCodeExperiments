#include <iostream>

int main() {

    // integer (whole number) (a variable datatype)
    int x;       // declare a variable
    x = 5;       // assign the value of x

    int y = 6;   // declaration and Assignment in one line

    int sum = x + y;    // create a variable and sum two previous variables

    // double (decimal)
    double a = 10.99;

    // single character
    char kmh = 'K';
    char money = '$';

    // boolean (true or false, 0 or 1)
    bool state1 = true;
    bool state2 = 1;

    bool state3 = false;
    bool state4 = 0;

    // string (object that represents a sequence of text)
    std::string my_name = "Kumiho";

    // output the variables

    std::cout << x << '\n';
    std::cout << y << '\n';
    std::cout << sum << '\n' << '\n';

    std::cout << a << '\n' << '\n';

    std::cout << kmh << '\n';
    std::cout << money << '\n' << '\n';

    std::cout << state1 << '\n';
    std::cout << state2 << '\n';
    std::cout << state3 << '\n';
    std::cout << state4 << '\n' << '\n';

    std::cout << my_name << '\n' << '\n';

    std::cout << "Your name is " << my_name << '\n' << '\n';    // variable and print
    std::cout << my_name << ", you have 0 " << money;           // multiple variables and print

    return 0;
}