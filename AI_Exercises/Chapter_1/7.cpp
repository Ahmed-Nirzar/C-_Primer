// Write a program that divides two floating-point numbers and prints the quotient and remainder.

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    float i,j;
    cout << "Enter two floating points: ";
    cin >> i >> j;
    cout << "quotient =" << i/j << "   "
         << "remainder = There is no remainder for floating point numbers"  
         << endl;

    return 0;
}