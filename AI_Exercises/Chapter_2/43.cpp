// Write a program that defines a const pointer to an integer and
// demonstrates its usage.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int i;
    const int *p = &i;
    cout << "Enter the value of int : ";
    cin >> i;
    // you can mutate i directly but can not with pointer.
    cout << "pointer : " << *p << "\nint : " << i << endl;

    return 0;
}