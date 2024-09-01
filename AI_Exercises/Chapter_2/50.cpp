// Use #define to create symbolic constants for length and width,
// then calculate and print the area of a rectangle.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;
#define LENGTH 25
#define WIDTH 20
#define AREA (LENGTH * WIDTH)

int main()
{
    cout << "The area of rectangle is : " << Area << endl;
}