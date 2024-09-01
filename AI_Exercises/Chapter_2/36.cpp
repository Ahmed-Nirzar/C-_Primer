// Write a program that demonstrates type conversion in an arithmetic
// expression involving int and double.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    double d = 25.36;
    int i = static_cast<int> (d);

    cout << "double value = " << d << "\n"
         << "int value = " << i << "\n";

    return 0;
}