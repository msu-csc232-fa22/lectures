//
// Created by jrd on 9/11/22.
//

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

