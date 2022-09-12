//
// Created by jrd on 9/11/22.
//

#ifndef LECTURE_MEMORYCELL_H
#define LECTURE_MEMORYCELL_H

template <typename T>
class MemoryCell
{
public:
    explicit MemoryCell( const T & initialValue = new T{ } );
    const T & read( ) const;
    void write( const T & x );
    // The Big Five
    /**
     * Big Five: Destructor.
     */
    ~MemoryCell( );

    /**
     * Copy Constructor.
     * @param src the source object (l-reference) used to create this MemoryCell
     */
    MemoryCell( const MemoryCell<T> & src );

    /**
     * Move Constructor.
     * @param src the source object (r-reference) used to create this MemoryCell
     */
    MemoryCell( MemoryCell<T> && src ) noexcept;

private:
    T storedValue;
};

#endif //LECTURE_MEMORYCELL_H
