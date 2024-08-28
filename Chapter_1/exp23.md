The program is not legal. The operator `<<` is a member of `std::cout`, thus cannot be called without the object `std::cout`.         

std::cout  << "The sum of " << v1;       
`std::cout`<< " and " << v2;      
`std::cout`<< " is " << v1 + v2 << std::endl;     