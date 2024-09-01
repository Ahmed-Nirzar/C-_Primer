// Write a program that counts the number of even and odd numbers in an array.

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
        if(!(i[j]%2)) cout << i[j] << " is even." << endl;
        else cout << i[j] << " is odd." << endl;
    }

    return 0;
}