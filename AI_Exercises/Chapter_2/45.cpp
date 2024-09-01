// Write a program that calculates the circumference of a circle
// using a const variable for Pi.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    float const PI = 3.14;
    float r;
    cout << "Enter the radius : ";
    cin >> r;
    cout << "Circumference of the circle is " << 2*PI*r << endl;

    return 0;
}