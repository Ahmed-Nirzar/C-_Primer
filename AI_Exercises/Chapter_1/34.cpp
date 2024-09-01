// Write a program that checks if a string is a palindrome.

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
    string s;
    cout << "Enter the string: ";
    cin >> s;
    
    auto len = s.size();
    int k = 0;

    for (int i = 0; i != len/2 ; i++ )
    {
        if (s[i] != s[len - i - 1]) k++;
    }

    if(k != 0) cout << "This string is not a palindrome.";
    if(k == 0) cout << "This string is a palindrome.";

    return 0;
}