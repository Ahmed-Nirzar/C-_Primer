// Write a function that calculates the GCD of two numbers.

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    int v1,v2;
    cout << "Enter two values: ";
    cin >> v1 >> v2;

    int k,i;

    if (v1 > v2)
    {
        for (i = 1; i != v1; i++)
        {
            if (!(v1%i) && !(v2%i)) k = i;
        }
        cout << k << endl;
    }

    if (v2 > v1)
    {
        for (i = 1; i != v2; i++)
        {
            if (!(v1%i) && !(v2%i)) k = i;
        }
        cout << k << endl;
    }

    return 0;
}