// Write a program that sums all integers from 1 to a given number.

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    int i,j,s;
    s = 0;
    cout << "Enter the number: ";
    cin >> j;

    for (i = 0; i != j; i++)
    {
        s += i;
    }

    cout << s << endl;
    return 0;
}