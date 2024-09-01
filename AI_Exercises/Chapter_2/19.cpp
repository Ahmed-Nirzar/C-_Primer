// Write a program that performs and prints the result of addition, 
// subtraction, multiplication, and division of two integers.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int v1,v2;
    cout << "Enter two values: ";
    cin >> v1 >> v2;

    cout << "Addition : " << v1 + v2 << "\n"
         << "Multiplication : " << v1*v2 << "\n"
         << "Substraction : " << v1 - v2 << "\n"
         << "Division : " << v1/v2 << endl;

    return 0;
}