// Declare an unsigned char variable, initialize it with the
// value 255, increment it by 1, and print its value to observe
// the overflow behavior.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    unsigned char c = 255;
    cout << "char value : " << c << endl;
    c++;
    cout << "new value : " << c << endl;

    return 0; 
}