// variables and constants

#include <iostream>

int main (){
    // declare a variable and print to std
    int i = 1;
    std::cout << i << std::endl;

    // assign different value
    i = 3;
    std::cout << i << std::endl;

    // declare a constant
    const int j = 4;
    std::cout << j << std::endl;

    // try overwriting a constant
    // j = 5; // throws error.
    // std::cout << j << std::endl;
    return 0;
}