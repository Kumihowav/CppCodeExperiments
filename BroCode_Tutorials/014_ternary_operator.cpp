#include <iostream>

//ternary operator is relplacement to an if / else statement
//      ? :
//(if) condition ? (do) expression1 : (else) expression2;

int main() {

    int grade;
    std::cout << "Input Grade: ";
    std::cin >> grade;

    grade >= 60 ? std::cout << "You pass" << '\n' : std::cout << "You failed!" << '\n';

    int number;
    std::cout << "Choose an integer: ";
    std::cin >> number;

    number % 2 == 1 ? std::cout << "Odd" << '\n' : std::cout << "Even" << '\n';

    bool hungry;
    std::cout << "Are you hungry? (1 or 0): ";
    std::cin >> hungry;

    // there are multiple ways to write this code.
    // with boolean, you can skip the '== true' or otherwise as it onbly has two states and the compiler recognises it anyway
    // you can also compare each datatype within the brackets of an operation


    // hungry == true ? std::cout << "Fucking fatty" : std::cout << "Eat more bitch!";
    // hungry ? std::cout << "Fucking fatty" : std::cout << "Eat more bitch!";
    std::cout << (hungry ? "Fucking Fatty" : "Eat more bitch!" );

    return 0;
}