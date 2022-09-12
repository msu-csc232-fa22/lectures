//
// Created by jrd on 9/11/22.
//

#ifndef LECTURE_MEMORYCELL_H
#define LECTURE_MEMORYCELL_H

template <typename T>
class MemoryCell
{
public:
    explicit MemoryCell(const T & initialValue = new T{ } );
    const T & read( ) const;
    void write( const T & x );
private:
    T storedValue;
};

#endif //LECTURE_MEMORYCELL_H
