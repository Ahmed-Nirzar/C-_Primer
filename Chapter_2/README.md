`exp1.cpp -`  This loop will never terminate.       
`exp2.cpp -`  Using while instead of for in exp1.cpp.    
`exp3.cpp -`  `Exercise 2.3` What output will the following code produce?        
unsigned u = 10, u2 = 42;       
std::cout << u2 - u << std::endl;       
std::cout << u - u2 << std::endl;        
int i = 10, i2 = 42;        
std::cout << i2 - i << std::endl;       
std::cout << i - i2 << std::endl;       
std::cout << i - u << std::endl;     
std::cout << u - i << std::endl;     
`exp4.cpp -`  Use of escape sequence.     
`exp5.cpp -`  `Exercise 2.7` What values do these literals represent? What type does each have?       
(a) "Who goes with F\145rgus?\012"        
(b) 3.14e1L (c) 1024f (d) 3.14L         
`exp6.cpp -`  `Exercise 2.8` Using escape sequences, write a program to print 2M followed by a newline. Modify the program to print 2, then a tab, then an M, followed by a newline.       
`exp7.cpp -`  `Exercise 2.10` What are the initial values, if any, of each of the following variables?            
std::string global_str;        
int global_int;       
int main()       
{       
int local_int;       
std::string local_str;        
}        
`exp8.cpp -`  Names declared in the outer scope can also be redefined in an inner scope.        
`exp9.cpp -`  `Exercise 2.13` What is the value of j in the following program?      
int i = 42;     
int main()     
{     
int i = 100;     
int j = i;     
}     
`exp10.cpp -`  `Exercise 2.14` Is the following program legal? If so, what values are printed?     
int i = 100, sum = 0;     
for (int i = 0; i != 10; ++i)     
sum += i;     
std::cout << i << " " << sum << std::endl;      
`exp11.cpp -`  `Exercise 2.17` What does the following code print?      
int i, &ri = i;       
i = 5; ri = 10;      
std::cout << i << " " << ri << std::endl;      
`exp12.cpp -`  When a pointer points to an object, we can use the dereference operator (the * operator) to access that object.      
`exp13.cpp -`  `Exercise 2.18` Write code to change the value of a pointer. Write code to change the value to which the pointer points.       
`exp14.cpp -`  `Exercise 2.20` What does the following program do?      
int i = 42;     
int *p1 = &i;     
*p1 = *p1 * *p1;      
`exp15.cpp -`  We indicate each pointer level by its own *.        
`exp16.md - `  `Exercise 2.1` What are the differences between int, long, long long, and short? Between an unsigned and a signed type? Between a float and a double?        
`exp17.md - `  `Exercise 2.2` To calculate a mortgage payment, what types would you use for the rate, principal, and payment? Explain why you selected each type.        
`exp18.md - `  `Exercise 2.5` Determine the type of each of the following literals. Explain the differences among the literals in each of the four examples:       
(a) ’a’, L’a’, "a", L"a"        
(b) 10, 10u, 10L, 10uL, 012, 0xC       
(c) 3.14, 3.14f, 3.14L       
(d) 10, 10u, 10., 10e-2          
`exp19.md - `  `Exercise 2.6` What, if any, are the differences between the following definitions:       
int month = 9, day = 7;       
int month = 09, day = 07;        
`exp20.md - `  `Exercise 2.9` Explain the following definitions. For those that are illegal, explain what’s wrong and how to correct it.       
(a) std::cin >> int input_value; (b) int i = { 3.14 };       
(c) double salary = wage = 9999.99; (d) int i = 3.14;         
`exp21.md -`  `Exercise 2.11` Explain whether each of the following is a declaration or a definition:       
(a) extern int ix = 1024;       
(b) int iy;        
(c) extern int iz;        
`exp22.md -`  `Exercise 2.12` Which, if any, of the following names are invalid?         
(a) int double = 3.14; (b) int _;         
(c) int catch-22; (d) int 1_or_2 = 1;         
(e) double Double = 3.14;          
