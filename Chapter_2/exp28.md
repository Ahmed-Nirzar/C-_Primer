The initialization of `p` as `void *p = &i;` is `legal` because `void*` can hold the address of any type.        
       
The initialization of `lp` as `long *lp = &i;` is `illegal` because `long*` and `int`* are incompatible types. To make it compile, an explicit cast is needed, but it is not recommended due to potential undefined behavior.        