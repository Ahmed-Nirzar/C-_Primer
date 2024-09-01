// Write a program that reads a char from the user and prints its ASCII value.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    char c;
    
    cout << "Enter a character : ";
    cin >> c;

    int i = static_cast<int>(c);

    cout << "ASCII code = " << i << endl;

    return 0;
}