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
     * Big Five: Copy Constructor.
     * @param src the source object (l-reference) used to create this MemoryCell
     */
    MemoryCell( const MemoryCell<T> & src );

    /**
     * Big Five: Move Constructor.
     * @param src the source object (r-reference) used to create this MemoryCell
     */
    MemoryCell( MemoryCell<T> && src ) noexcept;

    /**
     * Big Five: Copy Assignment Operator.
     * @param rhs the source object (l-reference) used to assign the attributes of this MemoryCell
     * @return a reference to newly created object is returned.
     */
    MemoryCell & operator=( const MemoryCell & rhs );


    /**
     * Big Five: Move Assignment Operator.
     * @param rhs the source object (r-reference) used to assign the attributes of this MemoryCell
     * @return a reference to new created object is returned.
     */
    MemoryCell & operator=( MemoryCell && rhs ) noexcept ;

private:
    T storedValue;
};

#endif //LECTURE_MEMORYCELL_H
