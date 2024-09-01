(a) `int i, *const cp;` : `Illegal`. Constant pointer `cp` must be initialized.     
      
(b) `int *p1, *const p2;` : `Illegal`. Constant pointer `p2` must be initialized.       
       
(c) `const int ic, &r = ic;` : `Illegal`. Constant integer `ic` must be initialized.    
     
(d) `const int *const p3;` : `Illegal`. Constant pointer `p3` must be initialized.      
        
(e) `const int *p;` : `Legal`. A pointer to a constant integer does not need to be initialized at the time of declaration.       