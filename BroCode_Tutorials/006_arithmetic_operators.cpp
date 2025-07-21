#include <iostream>

int main() {

    int x = 20;

    x+=1;       //addition operator. long form: 'x = x + 1;'
    x++;        //increment (by 1)

    x-=1;       //subtraction ('x = x - 1;')
    x--;        //decrement (by 1)

    x*=2;       //multiplication ('x = x * 2;')

    x/=3;       //division ('x = x / 2;')

    //make sure to use decimal (double) datatype when you want
    //to keep the decimal of a division.
    //otherwise it will truncate variable to an integer value

    int x_remainder = x % 3;                //modulus (remainder)

    int bidmas = 2 + 5 * (5 - 2) / 3;       //operation order applies

    std::cout << x << '\n';
    std::cout << x_remainder << '\n';
    std::cout << bidmas;

    return 0;
}