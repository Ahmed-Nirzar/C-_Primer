// Write a program that shows the effect of integer division
// compared to floating-point division.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int v1,v2;

    cout << "Enter two values : ";
    cin >> v1 >> v2;

    cout << "Int division = " << v1/v2 << endl;

    float v3 = static_cast<float> (v1);
    float v4 = static_cast<float> (v2);

    cout << "Float division = " << v3/v4 << endl;

    return 0;
}