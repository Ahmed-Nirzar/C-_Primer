// 24.Write a program that uses compound assignment operators 
// (+=, -=, *=, /=) and prints the results.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int v1,v2;
    cout << "Enter two values: ";
    cin >> v1 >> v2;

    int a = v1 += v2;
    int b = v1 -= v2;
    int c = v1 *= v2;
    int d = v1 /= v2;

    cout << "(v1 += v2) : " << a << "\n"
         << "(v1 -= v2) : " << b << "\n"
         << "(v1 *= v2) : " << c << "\n"
         << "(v1 /= v2) : " << d << endl;

    return 0;
}