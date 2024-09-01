// Write a program that demonstrates the use of the decrement (--) operator.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int i;
    cout << "Enter a value: ";
    cin >> i;
    i--;

    cout << "\'i\' after decrement(i--) : " << i << endl;

    return 0;
}