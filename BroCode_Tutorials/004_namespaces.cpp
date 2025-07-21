#include <iostream>

namespace first{      // declare a new namespace, used to overcome naming conflicts  
    int x = 1;        // makes sure that two variables don't conflict while using the same name
}

namespace second{
    int x = 2;
}

int main() {
    using namespace first;
    using std::cout;        

    cout << x << '\n';
    cout << second::x << '\n';      // declaring the namespace using a double colon ( :: )

    return 0;
}

/*

can have 'using namespace std', but could cause naming conflicts
instead, declare each on seperatealy
'using std::cout;' or 'using std::string'

if no namespace is called,
it will use the locally stored variable.
such as using the one within {} of main

*/