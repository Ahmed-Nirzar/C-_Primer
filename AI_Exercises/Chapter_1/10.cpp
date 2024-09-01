// Write a program that calculates the perimeter of a circle given its radius.

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    float r;
    cout << "Enter the radius: ";
    cin >> r;
    cout << "The perimeter of the circle is "
         << 2*3.14*r << endl;
    
    return 0;
}