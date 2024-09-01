// Write a program that initializes variables using binary, octal,
// and hexadecimal literals and prints them.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int b = 01001010;
    int o = 024;
    int h = 0x15d;

    cout << "bin = " << b << endl;
    cout << "oct = " << o << endl;
    cout << "hex = " << h << endl;

    return 0;
}