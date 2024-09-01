// Write a program that determines if a number is even or odd.

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    int i;
    cout << "Enter the number: ";
    cin >> i;
    if (!(i%2)) cout << "This number is even.";
    else cout << "This number is odd." << endl;

    return 0;
}