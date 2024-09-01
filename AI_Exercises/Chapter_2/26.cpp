// Write a program that calculates and prints the average of
// three floating-point numbers.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    float v1,v2,v3;

    cout << "Enter three values: ";
    cin >> v1 >> v2 >> v3;

    cout << "Average : " << (v1+v2+v3)/3 << endl;

    return 0;
}