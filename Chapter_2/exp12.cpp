#include <iostream>

int main()
{
    int ival = 42;
    int *p = &ival;  // p holds the address of ival; p is a pointer to ival
    std::cout << *p << std::endl;      // * yields the object to which p points; prints 42

    *p = 0;          // * yields the object; we assign a new value to ival through p
    std::cout << *p << std::endl;   // prints 0
    return 0; 
}