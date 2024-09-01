// Write a program that prints the multiplication table of a given number.

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    int i,j;
    cout << "Enter the number: ";
    cin >> i;
    cout << "Enter the range: ";
    cin >> j;

    for (int k = 1; k <= j; k++)
    {
        cout << k*i << endl;
    }

    return 0;
}