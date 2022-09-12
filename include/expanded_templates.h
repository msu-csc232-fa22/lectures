/**
 * CSC232 - Data Structures
 * Missouri State University, Spring 2020
 *
 * @file    expanded_templates.h
 * @author  Jim Daehn <jdaehn@missouristate.edu>
 * @brief   Class template expansions.
 */

#ifndef MSU_CSC232_EXPANDED_TEMPLATES_H__
#define MSU_CSC232_EXPANDED_TEMPLATES_H__

#include "MemoryCell.cpp"
#include <string>

/* Include class template implementation files as needed */
template class MemoryCell<int>;
template class MemoryCell<std::string>;
template class MemoryCell<char>;

#endif // MSU_CSC232_EXPANDED_TEMPLATES_H__
