//collin gates
//h. It includes the "stack.h" header file and the <iostream> library. It declares the function testStack() without providing its implementation. The purpose of this header file is to provide a forward declaration for the testStack() function, allowing other parts of the program to use it. The header file is protected by inclusion guards to prevent multiple inclusions.
#ifndef MAIN_H
#define MAIN_H

#include "stack.h"
#include <iostream>

void testStack();

#endif

