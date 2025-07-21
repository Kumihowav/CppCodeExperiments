#include <iostream>
#include <vector>       //new header file (unknown at this time)

/* 
typedef is a reserved keyword used to create
an alias for a data type.
helps with readablility and reduces typos.
convensional naming scheme: include '_t' after name.

example:
'typedef std::vector<std::pair<std::string, int>> pairlist_t'
this is a complicated datatype crunched into the 'pairlist_t' alias

typedef has been largely been replaced with the using keyword.
(note: 'using' is better for templates (not learned yet) )
here's an example of the same code below, but using typedef:
'typedef std::string string_t;'
'typedef int number_t;'
*/

using string_t = std::string;       //creating the alias
using number_t = int;

int main() {

    string_t kmh = "Kumiho";        //using the new alias to create a variable
    number_t age = 20;

    std::cout << kmh << " is " << age;

    return 0;
}