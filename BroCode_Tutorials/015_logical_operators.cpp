#include <iostream>

int main() 
{
    int temp;
    bool sunny;

    std::cout << "Enter temperature: ";
    std::cin >> temp;
    std::cout << "Is the sun out? (1 for yes or 0 for no): ";
    std::cin >> sunny;

/* AND = &&

    if(temp > 0 && temp < 30)
    {
        std::cout << "Perfect temperature range";
    }
    else
    {
        std::cout << "The temperature range isn't right";
    }
*/

//OR = ||

    if(temp < 0 || temp > 30)
    {
        std::cout << "The temperature range isn't right" << '\n';
    }
    else
    {
        std::cout << "Perfect temperature range" << '\n';
    }

//! = NOT    

    // (sunny == true) = (sunny)
    // (sunny == false) = (!sunny)
    if(!sunny) 
    {
        std::cout << "Sun's dead :(";
    }
    else
    {
        std::cout << "Sun's dead";
    }

    return 0;
}