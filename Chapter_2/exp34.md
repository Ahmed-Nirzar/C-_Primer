`const int v2 = 0;` : Top-level `const`.      
      
`const int *p2 = &v2, *const p3 = &i, &r2 = v2;` :     
`p2` : Low-level `const`.    
`p3` : Both top-level and low-level `const`.    
`r2` : Low-level `const.    