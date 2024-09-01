// Write a program that declares and initializes a few variables 
//of different types (int, float, char) and prints their values.

#include <iostream>

int main()
{
    int i = 12;
    float f = 3.25;
    char c = 'a';

    std::cout << "i = " << i << " " 
              << "f = " << f << " "
              << "c = " << c << std::endl;
    
    return 0;
}