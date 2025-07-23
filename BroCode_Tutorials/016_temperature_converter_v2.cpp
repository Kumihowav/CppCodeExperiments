#include <iostream>
#include <limits>

void chooseInitialUnit();
void chooseTemp();
void chooseOutputUnit();
void convertTemp();
void calcReset();

int i = 0;
char initialUnit;
double tempIn;
char outputUnit;
double tempOut;

using std::cout;
using std::cin;
using std::numeric_limits;
using std::streamsize;

int main()
{
    cout << "*****Kumitemp Converter*****" << '\n';

    chooseInitialUnit();
    chooseTemp();
    chooseOutputUnit();
    convertTemp();

    if(outputUnit == 'K')
    {
        char degreeSymbolToggle = '';
        cout << tempIn << " "
    }
    else
    {
        char degreeSymbolToggle = '°';        
    }

    cout << "****************************";

    return 0;
}

void chooseInitialUnit()   // choosing unit of temperature
{
    cout << "Input initial unit (C, F or K): ";
    
    while(i == 0)   
    {
        cin >> initialUnit;

        switch(initialUnit)    // check for valid input
        {
            case 'C': case 'c':
                i = 1;
                initialUnit = 'C';
                break;
            case 'F': case 'f':
                i = 1;
                initialUnit = 'F';
                break;
            case 'K': case 'k':
                i = 1;
                initialUnit = 'K';
                break;
            default:
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Re-enter valid input (C, F or K): ";
        }
    }
}

void chooseTemp()   // choosing temperature to convert
{
    cout << "Input temperature to convert: ";
    
    while(!(cin >> tempIn))   // loop until valid input
    {       
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Re-enter valid Input (A number!): ";
    }
}

void chooseOutputUnit()   // choosing unit of temperature
{
    cout << "Input unit to convert to (C, F or K): ";
    i = 0;

    while(i == 0)   
    {
        cin >> outputUnit;

        switch(outputUnit)    // convert to capital letter and check bad input
        {
            case 'c': case 'C':
                outputUnit = 'C';
                break;
            case 'f': case 'F':
                outputUnit = 'F';
                break;
            case 'k': case 'K':
                outputUnit = 'K';
                break;  // used to break out of for, range-for, while, do-while and switch statement
            default:
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Re-enter valid input (C, F or K): ";
                continue;   // used to skip the rest of a for, range-for, while and do-while statements
                            // in this case, i never becomes 0 so the loop resets
        }
        if(outputUnit == initialUnit)   // is the unit the same?
        {
            cout << "That would be equivalent. Re-enter a unit other than " << initialUnit << " (C, F or K): ";
            i = 0;
        }
        else
        {
            i = 1;
        }
    }
}

void convertTemp()  // conversion matrix
{
         if(initialUnit == 'K' && outputUnit == 'C') {
        tempOut = tempIn - 273.15;
    }
    else if(initialUnit == 'C' && outputUnit == 'K') {
        tempOut = tempIn + 273.15;
    }
    else if(initialUnit == 'K' && outputUnit == 'F') {
        tempOut = (tempIn - 273.15) * (9 / 5) + 32;
    }
    else if(initialUnit == 'F' && outputUnit == 'K') {
        tempOut = (tempIn - 32) * (5 / 9) + 273.15;
    }
    else if(initialUnit == 'C' && outputUnit == 'F') {
        tempOut = (tempIn * (9 / 5) ) + 32;
    }
    else   (initialUnit == 'F' && outputUnit == 'C') {
        tempOut = (tempIn - 32) * (5 / 9);
    }
}