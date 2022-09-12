//
// Created by jrd on 9/11/22.
//

#include <iostream>
#include "MemoryCell.h"

template<typename T>
MemoryCell<T>::MemoryCell( const T & initialValue ) : storedValue{ initialValue }
{

}

template<typename T>
const T &MemoryCell<T>::read( ) const
{
    return storedValue;
}

template<typename T>
void MemoryCell<T>::write( const T & x )
{
    storedValue = x;
}

template<typename T>
MemoryCell<T>::~MemoryCell( )
{
    std::cout << "Big Five (Destructor): ";
    std::cout << "Memory cell with value " << storedValue << " is getting destroyed!\n";
}

template<typename T>
MemoryCell<T>::MemoryCell( const MemoryCell<T> &src ) : storedValue{ src.storedValue }
{
    std::cout << "Big Five (Copy Constructor): ";
    std::cout << "A new Memory cell is created with the value " << storedValue << "...\n";
}

template<typename T>
MemoryCell<T>::MemoryCell( MemoryCell<T> && src )  noexcept : storedValue{ src.storedValue }
{
    std::cout << "Big Five (Move Constructor): ";
    std::cout << "A new Memory cell is created with the value " << storedValue << "...\n";
}

template<typename T>
MemoryCell<T> & MemoryCell<T>::operator=( const MemoryCell &rhs )
{
    std::cout << "Big Five (Copy Assignment Operator): ";
    std::cout << "This cell was assigned a new storedValue: " << rhs.storedValue << " via an assignment operation...\n";
    if ( this != &rhs )
    {
        storedValue = rhs.storedValue;
    }
    return *this;
}

template<typename T>
MemoryCell<T> & MemoryCell<T>::operator=( MemoryCell && rhs ) noexcept
{
    std::cout << "Big Five (Move Assignment Operator): ";
    std::cout << "This cell was assigned a new storedValue: " << rhs.storedValue << " via an assignment operation...\n";
    std::swap( storedValue, rhs.storedValue );
    return *this;
}

