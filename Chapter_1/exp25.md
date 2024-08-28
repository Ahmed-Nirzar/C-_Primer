std::cout << "/*";                `legal`     
std::cout << "*/";                `legal`    
std::cout << /* "*/" */;          `illegal`    
std::cout << /* "*/" /* "/*" */;  `legal`     