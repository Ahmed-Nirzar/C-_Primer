(a) `const int buf;` (`Illegal`)     
In C++, a `const` variable must be initialized at the time of declaration because its value cannot be changed later. Here, `buf` is declared as const but is not initialized.     
      
(b) `int cnt = 0;` (`Legal`)       
This is a standard declaration and initialization of an integer variable.      
      
(c) `const int sz = cnt;` (`Legal`)      
`cnt` is already declared and initialized in `(b)`, so `sz` can be initialized with its value. The fact that sz is `const` just means it cannot be modified after its initialization.      
        
(d) `++cnt;` (`Legal`) `++sz;` (`Illegal`)      
`cnt` is a `non-constant` integer variable, so it can be incremented.     
`sz` is declared as `const` in `(c)`, so its value cannot be changed after initialization. Attempting to increment a `const` variable is not allowed.         
