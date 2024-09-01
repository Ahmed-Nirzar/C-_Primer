// Write a program that takes a floating-point input from the user
// and converts it to an integer, then prints the result.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int i;
    float f;
    cout << "Enter the float value: ";
    cin >> f;
    i = f;

    cout << "The number is : " << i << endl;

    return 0;
}