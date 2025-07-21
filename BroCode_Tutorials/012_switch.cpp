#include <iostream>

//switch statements are an alternative to many elseif statements,
//comparing a statement against matching cases

int main() {

    int month;
    std::cout << "Enter the month (1-12): ";
    std::cin >> month;

    switch(month) {
        case 1:                         //check if month is equal to '1'
            std::cout << "January";
            break;                      //jump to end of switch
        case 2:                         //(if not check the next case)
            std::cout << "February";
            break;
        case 3:
            std::cout << "March";
            break;
        case 4:
            std::cout << "April";
            break;
        case 5:
            std::cout << "May";
            break;
        case 6:
            std::cout << "June";
            break;
        case 7:
            std::cout << "July";
            break;
        case 8:
            std::cout << "August";
            break;
        case 9:
            std::cout << "September";
            break;
        case 10:
            std::cout << "October";
            break;
        case 11:
            std::cout << "November";
            break;
        case 12:
            std::cout << "December";
            break;
        default:
           std::cout << "That's not a month between 1-12!";      
    }

    char letter;

    std::cout << '\n' << "Enter a letter between A-F: ";
    std::cin >> letter;

    switch(letter) {
        case 'A':
            std::cout << "AAA";
            break;
        case 'B':
            std::cout << "BBB";
            break;
        case 'C':
            std::cout << "CCC";
            break;
        case 'D':
            std::cout << "DDD";
            break;
        case 'E':
            std::cout << "EEE";
            break;
        case 'F':
            std::cout << "FFF";
            break;
        default:
            std::cout << "That's not a letter between A-F";
    }

    return 0;
}