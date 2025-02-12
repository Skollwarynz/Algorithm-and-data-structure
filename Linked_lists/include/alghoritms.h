#ifndef ALGORITHM_H
#define ALGORITHM_H

/**
 * @file algorithm.h
 * @brief Header file for algorithm functions.
 *
 * This file contains the declaration of functions used for various
 * algorithms, including list merging operations.
 */

#include "linked_list.h"  /**< Include the linked list header file. */

/**
 * @brief Merges two sorted linked lists into one sorted list.
 *
 * This function takes two sorted linked lists and merges them into a single 
 * sorted list, preserving the ordering of elements.
 *
 * @param l The first sorted linked list.
 * @param m The second sorted linked list.
 * @return A new sorted linked list containing all elements from both input lists.
 */
list merge(list l, list m);

#endif /* ALGORITHM_H */
