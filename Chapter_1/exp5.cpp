#include <iostream>

int main()
{
    int sum = 0, val =1;
    // Keep executing the while as lond as val is less than or equal to 10
    while (val <= 10) {
        sum += val;    // assign sum+val to sum
        ++val;         // add 1 to val
    }
    std::cout << "Sum of 1 to 10 inclusive is "
              << sum << std::endl;

    return 0;
}