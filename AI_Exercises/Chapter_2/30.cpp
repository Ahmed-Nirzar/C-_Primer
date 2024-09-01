// Write a program that performs explicit type conversion from 
// double to int using static_cast.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    double d = 2.36;
    int i = static_cast<int>(d);

    cout << "int = " << i << endl;
    cout << "double = " << d << endl;

    return 0;
}