//
// Created by jrd on 9/11/22.
//

#include "csc232.h"

int main( int argc, char * argv[ ] )
{
    MemoryCell<int> intCell{ 5 };
    MemoryCell<std::string> stringCell{ "CSC232" };
    MemoryCell<char> charCell{ 'A' };

    std::cout << "Welcome to " << stringCell.read() << "!\n";
    std::cout << "Homework in this class is worth " << intCell.read() << " points.\n";
    std::cout << "Policy has it that we all start with an " << charCell.read() << "!\n";
    std::cout << std::endl;

    intCell.write( 6 );
    MemoryCell<int> intCellCopy{ intCell };
    std::cout << "intCellCopy is storing: " << intCellCopy.read() << "\n";

    MemoryCell<char> movedCell{ std::move( charCell ) };
    std::cout << "movedCell is storing:  " << movedCell.read() << "\n";
    // Note: Since we moved charCell, we shouldn't use it anymore

    return EXIT_SUCCESS;
}
