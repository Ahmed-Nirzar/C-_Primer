// Write a program that takes an integer input and prints its
// character representation using type conversion.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int i;
    cout << "Enter a number : ";
    cin >> i;

    char c = static_cast<char>(i);

    cout << "Character = " << c << endl;

    return 0;
}