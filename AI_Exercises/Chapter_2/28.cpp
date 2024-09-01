// Write a program that converts a distance from kilometers to miles.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    float f;

    cout << "Enter kilometer : ";
    cin >> f;
    cout << f << " kilometers = " << f*0.621371 << " miles" << endl;

    return 0;
}