// Write a program that computes the area of 
// a rectangle given its length and width.

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    float l,w;
    cout << "Enter length: ";
    cin >> l;
    cout << "Enter width: ";
    cin >> w;
    cout << "The area of the rectangle is "
         << l*w << endl;
    
    return 0;
}