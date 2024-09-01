// Write a program that reverses the elements of an array.

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

    int k = 0;

    for (int j = 0; j != 5 ; j++)
    {
        k = i[j];
        i[j] = i[9 - j];
        i[9 - j] = k;
    }

    for (int j = 0; j != 10; j++) 
    {
        cout << i[j] << endl;
    }

    return 0;
}