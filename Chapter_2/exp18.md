(a) `'a'`, `L'a'`, `"a"`, `L"a"`     

1. `'a'` : This is a character literal which is a single character.  
2. `L'a'` : This is a wide character literal which is a single     wide character.   
3. `"a"` : This is a string literal, which is an array of `const char`.    
4. `L"a"` : This is a wide string literal, which is an array of `const wchar_t`.     


(b) `10`, `10u`, `10L`, `10uL`, `012`, `0xC`

1. `10` : This is a decimal integer literal of type `int`.    
2. `10u` : This is an unsigned decimal integer literal. The suffix `u` indicates that it is of type `unsigned int`.     
3. `10L` : This is a decimal integer literal of type `long`. The suffix `L` indicates a `long` type.     
4. `10uL` : This is an unsigned decimal integer literal of type `unsigned long`. The suffix `uL` indicates both `unsigned` and `long`.     
5. `012` : This is an octal integer literal of type `int`. The leading `0` indicates octal representation. It equals 10 in decimal.       
6. `0xC` : This is a hexadecimal integer literal of type `int`. The `0x` prefix indicates hexadecimal representation. It equals 12 in decimal.      


(c) `3.14`, `3.14f`, `3.14L`     

1. `3.14` : This is a floating-point literal of type `double` by default.     
2. `3.14f` : This is a floating-point literal of type `float`. The suffix `f` indicates a `float` type.     
3. `3.14L` : This is a floating-point literal of type `long double`. The suffix `L` indicates a `long double` type.      


(d) `10`, `10u`, `10.`, `10e-2`

1. `10` : This is a decimal integer literal of type `int`.     
2. `10u` : This is an unsigned decimal integer literal of type `unsigned int`. The suffix `u` indicates an `unsigned` type.     
3. `10.` : This is a floating-point literal of type `double`. The presence of the decimal point without any suffix indicates a `double` type.      
4. `10e-2` : This is a floating-point literal in scientific notation of type `double`. The absence of a suffix indicates a `double` type. It equals `0.1`.