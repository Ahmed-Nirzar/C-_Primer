// Write a program that swaps the values of two variables.

#include <iostream>

int main()
{
    int i,j,k;
    i = 5;
    j = 10;

    std::cout << "i = " << i << "   "
              << "j = " << j
              << std::endl;

    // swap values of i and j
    k = i;
    i = j;
    j = k;

    std::cout << "i = " << i << "   "
              << "j = " << j
              << std::endl;

    return 0;
}