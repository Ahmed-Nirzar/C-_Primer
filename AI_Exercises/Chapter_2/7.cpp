// Write a program that demonstrates the difference between signed and unsigned integers.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    unsigned int a = -50;
    signed int b = -50;
    unsigned int c = 2147483649;
    signed int d = 2147483649;

    cout << "a = " << a << " (-50) [unsingned]\n"
         << "b = " << b << " (-50) [singned]\n"
         << "c = " << c << " (2147483649) [unsinged]\n"
         << "d = " << d << " (2147483649) [singed]"
         << endl;

    return 0;
}