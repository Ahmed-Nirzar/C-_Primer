#include <iostream>
std::string global_str;
int global_int;

int main()
{
    int local_int;
    std::string local_str;

    std::cout << global_str << " a" <<std::endl;
    std::cout << global_int << " b" <<std::endl;
    std::cout << local_int << " c" <<std::endl;
    std::cout << local_str << " d" <<std::endl;

    return 0;
}