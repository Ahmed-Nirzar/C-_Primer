Differences Between `int`, `long`, `long long`, and `short` :     
      
1. `int` :       
           `Size`: Typically 4 bytes (32 bits) on most platforms.
           `Range`: -2,147,483,648 to 2,147,483,647 (signed) 0 to 4,294,967,295 (unsigned).

2. `long` :
            `Size`: At least 4 bytes, but often 8 bytes (64 bits) on modern systems.
            `Range`: Depends on the platform, but on a 64-bit system it is usually -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807 (signed), 0 to 18,446,744,073,709,551,615 (unsigned).

3. `long long` :
            `Size`: At least 8 bytes (64 bits).
            `Range`: -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807 (signed), 0 to 18,446,744,073,709,551,615 (unsigned).

4. `short` :
            `Size`: At least 2 bytes (16 bits).
            `Range`: -32,768 to 32,767 (signed), 0 to 65,535 (unsigned).


Differences Between `Signed` and `Unsigned` Types :

1. `Signed Types` :
            Can represent both positive and negative values.
            `Range`: For n bits, the range is from -2^(n-1) to 2^(n-1) - 1.

2. `Unsigned Types` :
            Can only represent non-negative values (positive values and zero).
            `Range`: For n bits, the range is from 0 to 2^n - 1.


Differences Between `float` and `double` :

1. `float` :
            `Size`: Typically 4 bytes (32 bits).
            `Precision`: Single precision

2. `double` :
            `Size`: Typically 8 bytes (64 bits).
            `Precision`: Double precision