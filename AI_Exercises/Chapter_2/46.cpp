// Write a program that demonstrates the difference between a const
// variable and a regular variable.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int regval = 20;
    cout << "Regular variable : " << regval << endl;

    // Change the variable
    regval = 30;
    cout << "Changed regular variable : " << regval << endl;

    // Const variable is not changable
    const int cval = 20;
    cout << "Const variable : " << cval << endl;

    // You can not change const value
}