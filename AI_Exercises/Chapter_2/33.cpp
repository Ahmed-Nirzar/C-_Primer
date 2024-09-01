// Write a program that shows the result of dividing two integers and 
// the same division after converting them to floating-point numbers.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int v1 , v2;
    cout << "Enter two values: ";
    cin >> v1 >> v2;
    
    cout << "The int division is : " << v1/v2 << endl;

    float v3 = v1;
    float v4 = v2;

    cout << "The float division is : " << v3/v4 << endl;

    return 0;
}