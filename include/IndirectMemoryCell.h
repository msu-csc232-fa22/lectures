//
// Created by jrd on 9/15/22.
//

#ifndef LECTURE_INDIRECT_MEMORY_CELL__H
#define LECTURE_INDIRECT_MEMORY_CELL__H

template <typename T>
class IndirectMemoryCell
{
public:
    explicit IndirectMemoryCell( const T & initialValue = T{ } );
    const T & read( ) const;
    void write( const T & x );
    // The Big Five
    /**
     * Big Five: Destructor.
     */
    ~IndirectMemoryCell( );

    /**
     * Big Five: Copy Constructor.
     * @param src the source object (l-reference) used to create this IndirectMemoryCell
     */
    IndirectMemoryCell( const IndirectMemoryCell<T> & src );

    /**
     * Big Five: Move Constructor.
     * @param src the source object (r-reference) used to create this IndirectMemoryCell
     */
    IndirectMemoryCell( IndirectMemoryCell<T> && src ) noexcept;

    /**
     * Big Five: Copy Assignment Operator.
     * @param rhs the source object (l-reference) used to assign the attributes of this IndirectMemoryCell
     * @return a reference to newly created object is returned.
     */
    IndirectMemoryCell & operator=( const IndirectMemoryCell & rhs );


    /**
     * Big Five: Move Assignment Operator.
     * @param rhs the source object (r-reference) used to assign the attributes of this IndirectMemoryCell
     * @return a reference to new created object is returned.
     */
    IndirectMemoryCell & operator=( IndirectMemoryCell && rhs ) noexcept;

private:
    T * storedValue;
};

#endif // LECTURE_INDIRECT_MEMORY_CELL__H
