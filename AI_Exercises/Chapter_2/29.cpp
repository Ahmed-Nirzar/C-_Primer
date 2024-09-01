// Write a program that demonstrates implicit type conversion
// between int and double.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    double d = 1.25;
    int i = d;

    cout << i << endl;
    cout << d << endl;

    return 0;
}