// Write a program that takes a floating-point input from the user and prints it.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    float f;
    cout << "Enter a floating-point input : ";
    cin >> f;
    cout << "The floating-point value is " << f << endl;

    return 0;
}