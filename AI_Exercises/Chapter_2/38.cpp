// Write a program that converts an uppercase character to its
// lowercase equivalent.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    char c;
    cout << "Enter a character : ";
    cin >> c;

    c = tolower(c);

    cout << "Character = " << c << endl;

    return 0;
}