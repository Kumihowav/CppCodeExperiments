//header files are external scripts that can help with condensing code into
//more readable and useable functions (in these two cases)

#include <iostream> //header file for handling basic input and output streams
#include <string>   //header file for handling strings

using std::string;

//iostream = input, output stream. stream of information to be inputted or outputted
//string = handling different types of strings

//the user input is stored in a buffer that can be manipulated to
//reduce errors or format the input stream in different ways

int main() {

    string name;
    int age;

    std::cout << "Your age: ";         
    std::cin >> age;
    //    ^ standard input stream.

    //works with all datatypes until it encounters whitespace
    //and assumes certain information (e.g. it adds a '\n' at the end)

    //***
    //if there was an error with the input stream, such as trying to input a non integer
    //into a int variable, you can clear the error flag with 'std::cin.clear()'
 
    //to remove everything from the input buffer, you can use 'std::cin.ignore()'.
    //***

    std::cout << "Your full name: ";
    std::getline(std::cin >> std::ws, name);
    //      ^ 'getline' is similar to cin, but accepts an entire line of input with whitespaces.
    //'ws' clears any leading whitespaces from the buffer until the next non-whitespace character;
    //including the automatically added whitespace from the \n at the end of the previous use of 'cin'
    //and any accidental whitespace if the user inputted any.

    std::cout << "Your name is " << name << ". You are " << age << " years old";

    return 0;
}

//This code is intentionally flawed.
//If you try and input anything other than an integer into the age input, it will break.
//This is because of ***.