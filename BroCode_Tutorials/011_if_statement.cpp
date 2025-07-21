#include <iostream>

int main() {

    int age;

    std::cout << "Enter age: ";
    std::cin >> age;

    if(age >= 18 && age < 100) {        //&& = AND, || = or
        std::cout << "Age verified 18+";
    }
    else if(age < 0){
        std::cout << "Get born bitch!";
    }
    else if(age >= 100){
        std::cout << "You're either saggy or not real bitch!";
    }
    else{
        std::cout << "Get older bitch!";
    }

    return 0;
}