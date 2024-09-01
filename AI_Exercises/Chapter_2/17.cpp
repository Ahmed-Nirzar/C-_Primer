// Write a program that uses cin to read multiple inputs of different 
// types and prints them.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int i;
    float f;
    double d;
    char c;

    cout << "Enter a int value : ";
    cin >> i;
    cout << "\nEnter a float value :";
    cin >> f;
    cout << "\nEnter a double value : ";
    cin >> d;
    cout << "\nEnter a char value : ";
    cin >> c;
    cout << endl;
    
    cout << "int = " << i << "\n"
         << "float = " << f << "\n"
         << "double = " << d << "\n"
         << "char = " << c;
    
    return 0;
}