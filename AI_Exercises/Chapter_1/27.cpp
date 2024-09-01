// Write a function that takes two numbers and returns their sum.

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    int v1,v2;
    cout << "Enter two values: ";
    cin >> v1 >> v2;
    v1 += v2;

    cout << "Sum = " << v1 << endl;
    return 0;
}