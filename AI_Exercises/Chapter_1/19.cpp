// Write a program that calculates the factorial of a number.

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    int i,f;
    cout << "Enter the number: ";
    cin >> i;
    f = i;
    
    for (int j=i; j != 1; j-- )
    {
        f = f*(j-1);
    }

    cout << f << endl;

    return 0;
}