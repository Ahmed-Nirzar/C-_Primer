// Write a program that converts a temperature from Celsius to Fahrenheit.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    float c;
    cout << "Enter the temperature in celsius: ";
    cin >> c;
    cout << c << " Fahrenheit = " 
              << (c*(9/5)) + 32
              << endl;
    
    return 0;
}