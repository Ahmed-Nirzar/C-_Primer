(a) `int i = -1, &r = 0;` (`Illegal`)     
A reference must be initialized to refer to a valid object, not a literal, `&r = 0;`

(b) `int *const p2 = &i2;` (`Legal`)     
Assuming `i2` is declared as an `int` elsewhere in the code.     

(c) `const int i = -1, &r = 0;` (`Illegal`)     
While `const int i = -1;` is legal, `const int &r = 0;` is not. Even though `r` is a reference to a constant integer, you cannot bind a reference to a constant integer to a literal directly.    
     
(d) `const int *const p3 = &i2;` (`Legal`)    
Assuming `i2` is declared as an `int` elsewhere in the code, this would be legal.
      
(e) `const int *p1 = &i2;` (`Legal`)      
Assuming `i2` is declared as an `int` elsewhere in the code, this would be legal.     
     
(f) `const int &const r2;` (`Illegal`)      
A reference itself cannot be `const`. A reference must always be bound to an object, and you cannot declare it as `const` because references are inherently constant (you cannot change what they refer to after initialization).       
      
(g) `const int i2 = i, &r = i;` (`Legal`)     
Assuming `i` is declared elsewhere as an `int`, this is valid. `i2` is initialized to the value of `i`, and `r` is a reference to `i`.       