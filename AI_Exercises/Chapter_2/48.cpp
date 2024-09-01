// Write a program that initializes a float variable with a
// fixed-point literal and prints its value.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    float f = 3.14f; // without f suffix 3.14 will become double
    cout << "The float value is " << f << endl;

    return 0;
}