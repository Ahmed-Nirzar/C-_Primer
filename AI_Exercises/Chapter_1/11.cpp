// Write a program that checks if a number is positive, negative, or zero.

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    int i;
    cout << "Enter a number : ";
    cin >> i;

    if (i > 0) cout << "Greater than zero" <<endl; 

    if (i < 0) cout << "Less than zero" << endl;

    if (i == 0) cout << "Equals to zero" << endl;

    return 0;
}