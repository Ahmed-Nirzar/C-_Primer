#include <iostream>

int main()
{
    int obj = 12, *p = &obj;
    std::cout << obj << " " << *p << std::endl;
    *p = 10;
    std::cout << obj << " " << *p << std::endl;
    return 0;
}