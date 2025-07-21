#include <iostream>

//type conversion changes a value of one data type to another

int main() {

    int x = 3.14;               //implicit (automatic) type conversion to an integer

    double y = (int) 3.14;      //explicit type conversion to an integer

    char a = 100;               //converts to a character via ASCII (100 = d)

    int correct = 8;
    int questions = 10;

    //convert either variable (in this case) to a decimal, otherwise it will output an integer (0).
    //in other words, absolute output of the first operation would be 0.8 which is implicitly
    //converted into a 0 before being multiplied to 100
    double score = correct / (double)questions * 100;

    std::cout << x << '\n';
    std::cout << y << '\n';

    std::cout << a << '\n';             //printing the variable as-is
    std::cout << (int) a << '\n';       //printing the variable as an integer

    std::cout << score << "%";

    return 0;
}