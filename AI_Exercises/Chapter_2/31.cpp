// Write a program that takes an integer input from the user and
// converts it to a floating-point number, then prints the result.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int i;
    float f;
    cout << "Enter the int value: ";
    cin >> i;
    f = i;

    cout << "The number is : " << f << endl;

    return 0;
}