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

/**
 * @brief Deletes all occurrences of a given value from a linked list.
 *
 * This function recursively traverses the linked list and removes all nodes 
 * that contain the specified value. The function returns the modified list 
 * without the deleted nodes.
 *
 * @param l The linked list from which occurrences should be removed.
 * @param value The integer value to be deleted from the list.
 * @return A modified linked list with all occurrences of the specified value removed.
 */
list delete_occurencies(list l, int value);

list add_node(int value, list l);

list copy_list(list l);

list symmetrical_difference(list l, list m);

#endif /* ALGORITHM_H */
