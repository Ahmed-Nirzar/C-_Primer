// Write a program that finds the largest element in an array.

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

    int k = i[0];

    for (int j = 0; j != 10; j++)
    {
        if(k < i[j])
        {
            k = i[j];
        }
    }

    cout << k << endl;
    return 0;
}