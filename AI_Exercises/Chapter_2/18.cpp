// Write a program that uses cin to read a character and an integer and prints both.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int i;
    char c;

    cout << "Enter int value : ";
    cin >> i;
    cout << "\nEnter char value : ";
    cin >> c;

    cout << "Int = " << i << "\n"
         << "Char = " << c << endl;

    return 0;

}