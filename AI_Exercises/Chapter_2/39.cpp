// Write a program that declares a const integer and tries to
// modify its value to demonstrate immutability.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    // This program will not execute.
    const int i = 10;
    cout << "Enter a number to change const number: ";
    cin >> i;

    return 0;
}