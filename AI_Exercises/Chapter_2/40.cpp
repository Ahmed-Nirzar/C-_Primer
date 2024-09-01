// Write a program that declares const variables for your name and
// age, and prints them.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
    string name;
    cout << "Enter your name : ";
    cin >> name;
    int age;
    cout << "Enter your age : ";
    cin >> age;
    const int cage = age;
    const string cname = name;
    cout << "Name : " << cname << endl;
    cout << "Age : " << cage << endl;
    
    return 0;
}