#include <iostream>

int main()
{
    int sum = 0, val = 50;
    // Keep executing the while as lond as val is less than or equal to 100 and more than 50
    while (val <= 100) {
        sum += val;
        ++val;
    }
    std::cout << "Sum of 50 to 100 inclusive is " << sum << std::endl;

    return 0;
}