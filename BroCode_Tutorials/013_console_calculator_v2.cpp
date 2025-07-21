#include <iostream>
#include <limits>

char operatorChar;                    //declare variables before functions if being used in more than one
double num1;
double num2;
double result;
int shouldReset = 1;

void userInput();      //declare functions before main function when defining it after the main function
void workOut();
void resetFunc();

int main() {

    std::cout << "**********Kumicalculator**********" << '\n';

    while (shouldReset == 1) {
        userInput();        //gets operator, num1 and num2 from user
        workOut();          //works out the result

        std::cout << "Your result is" << '\n';
        std::cout << num1 << " " << operatorChar << ' ' << num2 << " = " << result << '\n';

        resetFunc();        //asks for reset, then either resets or continues
    }
    
    std::cout << "Goodbye" << '\n';
    std::cout << "**********************************";
    return 0;
}

void userInput() {     //self-made function, called in the main program

    int i = 0;

    std::cout << "Enter an operator" << '\n';
    std::cout << "(+, -, * or / ): ";

    while (i == 0) {        //while loop repeats code until condition is met
        std::cin >> operatorChar;                                         //ask for input

        switch(operatorChar) {                                            //check if it's a valid input
            case '+': case '-': case '/': case '*':             
                i = 1;
                break;                                          //if so, change 'i' to 1 and satisfy the loop
            default:
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //ignore the maximum amount of input buffer characters possible including the newline
                std::cout << "Re-enter valid input (+, -, * or /): ";
        }    
    }

    i = 0;

    std::cout << "Input accepted. Enter #1: ";

    while (!(std::cin >> num1)) {      //'std::cin' will output true if the input is valid. this loops as long as the input wasn't (!) valid
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Re-enter valid input #1 (A number!): ";
    }

    std::cout << "Input accepted. Enter #2: ";

    while (!(std::cin >> num2)) {      
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Re-enter valid input #2 (A number!): ";
    }
    
}

void workOut() {

    switch(operatorChar) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 == 0) {
                 std::cout << "Error: cannot divide by 0" << '\n';      //solution could be better
                 result = 0;
            } 
            else {
                result = num1 / num2;
            }
            break;
    }
}

void resetFunc() {

    int i = 0;
    char resetInput;

    std::cout << "Would you like to reset? ('Y' or 'N'): ";

    while (i == 0) {        
        std::cin >> resetInput;

        switch(resetInput) {
            case 'Y': case 'y':
                shouldReset = 1;
                i = 1;
                break;
            case 'N': case 'n':
                shouldReset = 0;
                i = 1;
                break;
            default:
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "Re-enter a valid input ('Y' or 'N'): ";
        }
    }
}