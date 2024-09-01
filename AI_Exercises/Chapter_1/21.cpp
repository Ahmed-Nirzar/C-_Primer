// Write a program that initializes an array with 10 integers and prints them.

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    int i[10];

    for (int j = 0; j != 10; j++)
    {
        cout << "Enter value no." 
             << j+1 << " : ";
        cin >> i[j];
        cout << endl;
    }

    for (int j = 0; j != 10; j++) 
    {
        cout << i[j] << endl;
    }

    return 0;
}