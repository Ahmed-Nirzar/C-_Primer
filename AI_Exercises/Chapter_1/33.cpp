// Write a program that reverses a string.

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
    string s;
    cout << "Enter string: ";
    cin >> s;
    auto len = s.size();

    for (int i = len; i != -1 ; i-- )
    {
        cout << s[i];
    }
    cout << endl;

    return 0;
}