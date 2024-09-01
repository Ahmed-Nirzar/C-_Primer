// j: int
// k: const int&
// p: const int*
// j2: const int
// k2: const int&

#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main()
{
    const int i = 42;
    auto j = i; 
    const auto &k = i; 
    auto *p = &i;
    const auto j2 = i, &k2 = i;

    cout << "i is: " << i << endl;
    cout << "j is: " << j << endl;
    cout << "k is: " << k << endl;
    cout << "p is: " << *p << endl;
    cout << "j2 is: " << j2 << endl;
    cout << "k2 is: " << k2 << endl;

    return 0;
}