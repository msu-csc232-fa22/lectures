//
// Created by jrd on 9/15/22.
//

#include "IndirectMemoryCell.h"

template<typename T>
IndirectMemoryCell<T>::IndirectMemoryCell( const T & initialValue ) : storedValue{ new T{ initialValue } }
{

}

template<typename T>
const T &IndirectMemoryCell<T>::read( ) const
{
    return * storedValue;
}

template<typename T>
void IndirectMemoryCell<T>::write( const T & x )
{
    * storedValue = x;
}
