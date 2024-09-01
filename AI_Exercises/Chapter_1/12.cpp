// Write a program that determines whether a given year is a leap year.

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    int y;
    cout << "Enter the year: ";
    cin >> y;
    if ((y%4)) cout << "It is not a leap year.";
    else cout << "This year is a leap year." << endl;

    return 0;
}