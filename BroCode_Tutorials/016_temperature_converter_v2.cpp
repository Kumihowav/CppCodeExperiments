#include <iostream>
#include <limits>

void chooseInitialUnit();
void chooseTemp();
void chooseOutputUnit();
void convertTemp();
void calcReset();

char initialUnit;
double tempIn;
char outputUnit;
double tempOut;
char reset;
int j;

using std::cout;
using std::cin;
using std::numeric_limits;
using std::streamsize;

int main()
{
    cout << "*****Kumitemp Converter*****" << '\n';
    j = 0;

    while(j == 0)
    {
        chooseInitialUnit();
        chooseTemp();
        chooseOutputUnit();
        convertTemp();

        // calculator output
        if(outputUnit == 'K') {
            cout << tempIn << "°" << initialUnit << " converts to " << tempOut << outputUnit << '\n';
        }
        else if(initialUnit == 'K') {
            cout << tempIn << initialUnit << " converts to " << tempOut << "°" << outputUnit << '\n';
        }
        else {
            cout << tempIn << "°" << initialUnit << " converts to " << tempOut << "°" << outputUnit << '\n';
        }

        calcReset();        
    }
    cout << "Thank you for using this program" << '\n';
    cout << "****************************";

    return 0;
}

void chooseInitialUnit()   // choosing unit of temperature
{
    cout << "Input initial unit (C, F or K): ";
    int i = 0;
    
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
    int i = 0;

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
         if(initialUnit == 'K' && outputUnit == 'C') {  // kelvin to celsius
        tempOut = tempIn - 273.15;
    }
    else if(initialUnit == 'C' && outputUnit == 'K') {  // celsius to kelvin
        tempOut = tempIn + 273.15;
    }
    else if(initialUnit == 'K' && outputUnit == 'F') {  // kelvin to fahrenheit
        tempOut = (tempIn - 273.15) * (9.0 / 5) + 32;
    }
    else if(initialUnit == 'F' && outputUnit == 'K') {  // fahrenheit to kelvin
        tempOut = (tempIn - 32) * (5.0 / 9) + 273.15;
    }
    else if(initialUnit == 'C' && outputUnit == 'F') {  // celsius to fahrenheit
        tempOut = (tempIn * (9.0 / 5) ) + 32;
    }
    else if(initialUnit == 'F' && outputUnit == 'C') {  // fahrenheit to celsius
        tempOut = (tempIn - 32) * (5.0 / 9);
    }
}

void calcReset()    // check if user wants to restart
{
    cout << "Do you want to convert another temperature? (Y or N): ";
    int i = 0;

    while(i == 0)
    {
        cin >> reset;

        switch(reset)
        {
            case 'Y': case 'y': 
                j = 0;
                i = 1;
                break;
            case 'N': case 'n':
                j = 1;
                i = 1;
                break;
            default:
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Re-enter valid input (Y or N): ";
        }
    }
}