// Write a program that calculates and prints the remainder of
// the division of two integers using the modulo operator.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int v1,v2;
    cout << "Enter two values: ";
    cin >> v1 >> v2;

    cout << "Remainder : " << v1%v2 << endl;

    return 0;
}