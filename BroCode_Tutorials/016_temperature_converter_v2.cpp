#include <iostream>
#include <limits>

void chooseUnit();
void chooseTemp();
void convertTemp();

int i = 0;
char unit;
double tempIn;
double tempOut;

using std::cout;
using std::cin;
using std::numeric_limits;
using std::streamsize;

int main()
{
    cout << "*****Kumitemp Converter*****" << '\n';

    chooseUnit();
    chooseTemp();
    convertTemp();

    cout << "****************************";

    return 0;
}

void chooseUnit()   // Choosing unit of temperature
{
    cout << "Input initial unit (C, F or K): ";
    
    while(i == 0)   
    {
        cin >> unit;

        switch(unit)    // Check for valid input
        {
            case 'C': case 'c':
                i = 1;
                break;
            case 'F': case 'f':
                i = 1;
                break;
            case 'K': case 'k':
                i = 1;
                break;
            default:
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Re-enter valid input (C, F or K): ";
        }
    }
}

void chooseTemp()
{
    cout << "Input temperature to convert: ";
    
    while(i == 0)   
    {
        cin >> tempIn;

        switch(tempIn)    // Check for valid input
        {
            case 'C':
                i = 1;
                break;
            default:
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Re-enter valid input (C, F or K): ";
        }
    }
}

void convertTemp()
{

}