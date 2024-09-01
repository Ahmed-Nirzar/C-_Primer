// Write a program that reads three integers and prints the largest one.

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    int a,b,c;
    cout << "Enter three values : ";
    cin >> a >> b >> c;
    if(a > b && a > c) cout << a << " is greater" << endl;
    if(b > a && b > c) cout << b << " is greater" << endl;
    if(c > a && c > b) cout << c << " is greater" << endl;

    return 0;
}