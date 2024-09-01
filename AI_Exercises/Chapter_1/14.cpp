// Write a program that checks if a character is a vowel or consonant.

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    char v;
    cout << "Enter the character: ";
    cin >> v;
    if (v == 'a' || v == 'e' || v == 'i' || v == 'o' || v == 'u')
          cout << "This is a vowel." << endl;
    else cout << "This is a consonant." << endl;

    return 0;
}