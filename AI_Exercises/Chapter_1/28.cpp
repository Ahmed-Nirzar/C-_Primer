// Write a function that checks if a number is prime.

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    int i;
    cout << "Enter the number: ";
    cin >> i;
    if ((!(i%2) && (i != 2)) || (!(i%3) && (i != 3)) || (!(i%5) && (i != 5)) || (!(i%7) && (i != 7)))
    {
        cout << "This number is not prime." << endl;
    }
    else cout << "This number is prime." << endl;

    return 0; 
}