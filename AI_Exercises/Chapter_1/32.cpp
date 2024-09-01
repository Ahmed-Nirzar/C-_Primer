// Write a program that counts the number of characters in a string.

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
    string s;
    cout << "Enter a string: ";
    cin >> s;
    auto len = s.size();
    cout << "Size: " << len << endl;

    return 0;
}