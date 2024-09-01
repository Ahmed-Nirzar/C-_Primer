// Write a function to swap two numbers.

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    int v1,v2,c;
    cout << "Enter two values : ";
    cin >> v1 >> v2;
    
    c = v1;
    v1 = v2;
    v2 = c;

    cout << "1st value : " << v1 << endl;
    cout << "2nd value : " << v2 << endl;

    return 0;
}