`int null = 0, *p = null;` is not legal because it attempts to assign an `int` (null) to an `int*` (p).      
      
To make it `legal`, initialize `p` with the address of null using &null. This correctly assigns a pointer to `p` that points to the integer `null`.      