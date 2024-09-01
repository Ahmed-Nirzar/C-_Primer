// Write a program that takes two integer inputs from the user and prints their sum.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int v1,v2;

    cout << "Enter two values : ";
    cin >> v1 >> v2;
    cout << "Sum : " << v1 + v2 << endl;

    return 0;
}