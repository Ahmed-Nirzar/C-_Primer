#include <iostream>

int main()
{
    int ival = 1024;
    int *pi = &ival;  // pi points to an int
    int **ppi = &pi;   // ppi points to a pointer to an int
    std::cout << "The value of ival\n"
              << "direct value: " << ival << "\n"
              << "indirect value: " << *pi << "\n"
              << "doubly indirect value: " << **ppi
              << std::endl;
    return 0;
}