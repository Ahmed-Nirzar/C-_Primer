// Write a program that takes a single character input from the user and prints it.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    char c;
    cout << "Enter a single character : ";
    cin >> c;
    cout << "The character is " << c << endl;

    return 0;
}