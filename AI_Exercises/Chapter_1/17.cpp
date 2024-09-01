// Write a program that prints all even numbers between 1 and 50.

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    for (int i = 0; i != 50; i++)
    {
        if (!(i%2)) cout << i << endl;
    }

    return 0;
}