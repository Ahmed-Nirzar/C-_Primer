(a) `double* dp = &i;`      
This is `illegal`. In C++, you cannot assign the address of an `int` variable to a `double*` pointer without an explicit type cast.     

(b) `int *ip = i;`     
This is `illegal`. In C++, `i` is an `int` and cannot be directly assigned to an `int*` pointer. `i` is an integer value, not an address.      

(c) `int *p = &i;`
This is `legal`. The types are compatible because `p` is a pointer to an integer and `&i` gives the address of an integer variable `i`.      

