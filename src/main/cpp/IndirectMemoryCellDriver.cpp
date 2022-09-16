//
// Created by jrd on 9/11/22.
//

#include "csc232.h"

int main( )
{
    IndirectMemoryCell<int> a{ 2 }; // Initializing constructor
    IndirectMemoryCell<int> b = a;              // Copy constructor
    IndirectMemoryCell<int> c;                  // Default constructor

    c = b;                                      // Copy assignment operator

    a.write( 4 );
    std::cout << "a is storing: " << a.read() << " (expecting 4)\n";
    std::cout << "b is storing: " << b.read() << " (expecting 2)\n";
    std::cout << "c is storing: " << c.read() << " (expecting 2)\n";

    return EXIT_SUCCESS;
}
