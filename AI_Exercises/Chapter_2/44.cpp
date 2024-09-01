// Write a program that uses symbolic constants defined with
// #define and prints their values.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;
#define PI 3.1416
#define RADIUS 4
#define AREA_OF_CIRCLE (PI * RADIUS * RADIUS)

int main()
{
    cout << "Value of PI : " << PI 
         << "\nValue of Radius : " << RADIUS
         << "\nArea of the circle : " << AREA_OF_CIRCLE 
         << endl;

    return 0;
}