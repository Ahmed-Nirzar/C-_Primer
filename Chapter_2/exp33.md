(a) `i = ic;` : `Legal`. Assigning a constant value to a non-constant integer is allowed.     
      
(b) `p1 = p3;` : `Illegal`. `p3` is a constant pointer to a constant integer and cannot be assigned to a non-constant pointer.      
       
(c) `p1 = &ic;` : `Illegal`. You cannot assign the address of a constant integer to a pointer to a non-constant integer.      

(d) `p3 = &ic;` : `Illegal`. `p3` is a constant pointer and cannot be reassigned.     
       
(e) `p2 = p1;` : `Illegal`. `p2` is a constant pointer and cannot be reassigned.       
       
(f) `ic = *p3;` : `Illegal`. You cannot assign a new value to a constant integer.       