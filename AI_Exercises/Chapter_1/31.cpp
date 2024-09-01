// Write a program that reads a string from the user and prints it.

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
    string s;
    cout << "Entre a string: ";
    cin >> s;
    cout << "The string is : " << s << endl;

    return 0;
}