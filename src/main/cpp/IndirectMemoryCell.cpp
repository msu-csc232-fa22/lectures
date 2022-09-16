//
// Created by jrd on 9/15/22.
//

#include "IndirectMemoryCell.h"
#include <memory>

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

template<typename T>
IndirectMemoryCell<T>::~IndirectMemoryCell()
{
    delete storedValue;
}

template<typename T>
IndirectMemoryCell<T>::IndirectMemoryCell(const IndirectMemoryCell<T> &src) : storedValue{ new T{ *src.storedValue } }
{
  // Intentionally empty
}

template<typename T>
IndirectMemoryCell<T>::IndirectMemoryCell(IndirectMemoryCell<T> &&src) noexcept : storedValue{ src.storedValue }
{
    src.storedValue = nullptr;
}

template<typename T>
IndirectMemoryCell<T> &IndirectMemoryCell<T>::operator=(const IndirectMemoryCell &rhs)
{
    if ( this != &rhs )
        *storedValue = *rhs.storedValue;
    return *this;
}

template<typename T>
IndirectMemoryCell<T> &IndirectMemoryCell<T>::operator=(IndirectMemoryCell &&rhs) noexcept
{
    std::swap( storedValue, rhs.storedValue );
    return *this;
}
