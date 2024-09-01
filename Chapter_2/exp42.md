#include <iostream>

struct Foo { /* empty */ } // Note: no semicolon

int main()
{
return 0;
}

#error: expected ';' after struct definition
    3 | struct Foo { /* empty */ } // Note: no semicolon
      |                           ^
      |                           ;