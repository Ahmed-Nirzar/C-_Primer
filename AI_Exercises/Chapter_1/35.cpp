// Write a program that converts a string to uppercase.

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
    string s;
    cout << "Enter the string : ";
    cin >> s;

    auto len = s.size();

    for (int i = 0; i != len; i++)
    {
        s[i] = toupper(s[i]);
    }

    cout << s << endl;

    return 0;
}