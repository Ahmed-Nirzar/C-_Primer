// Write a program that calculates the sum of elements in an array.

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    int i[10];
    int sum = 0;

    for (int j = 0; j != 10; j++)
    {
        cout << "Enter value no." 
             << j+1 << " : ";
        cin >> i[j];
        cout << endl;
    }

    for (int j = 0; j != 10; j++)
    {
        sum += i[j];
    }

    cout << sum << endl;

    return 0;
}