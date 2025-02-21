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

#include <stdbool.h>
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

/**
 * @brief Adds a new node to the front of the list.
 *
 * This function allocates memory for a new node, assigns the given value to it, 
 * and sets its next pointer to the current head of the list.
 *
 * @param value The integer value to be stored in the new node.
 * @param l The current head of the list.
 * @return The new head of the list after insertion.
 *
 * @note If memory allocation fails, the function prints an error message and 
 *       terminates the program.
 */
list add_node(int value, list l);

/**
 * @brief Creates a deep copy of a linked list.
 *
 * This function recursively copies each node of the given list, 
 * preserving the order of elements.
 *
 * @param l The head of the list to be copied.
 * @return The head of the newly created copy of the list.
 *
 * @note If the input list is NULL, the function returns NULL.
 *       The function uses recursion, which may cause stack overflow for very large lists.
 */
list copy_list(list l);

/**
 * @brief Computes the symmetrical difference between two sorted linked lists.
 *
 * The symmetrical difference consists of elements that are present in one list 
 * but not in both. The input lists must be sorted in ascending order for correct behavior.
 *
 * @param l The first sorted linked list.
 * @param m The second sorted linked list.
 * @return A new linked list containing the symmetrical difference of the input lists.
 *
 * @note The function creates a new list by copying elements, so the caller is 
 *       responsible for freeing the returned list. It uses recursion, which may 
 *       cause stack overflow for very large lists.
 */
list symmetrical_difference(list l, list m);

/**
 * @brief Searches for an element in a linked list.
 *
 * This function iterates through the linked list to find the first node 
 * that contains the specified value.
 *
 * @param value The integer value to search for.
 * @param l The head of the list to search in.
 * @return A pointer to the first node containing the value, or NULL if not found.
 *
 * @note The function does not modify the list. If the value is not found, 
 *       it returns NULL.
 */
list find_element(int value, list l);

/**
 * @brief Computes the length of a linked list.
 *
 * This function iterates through the list and counts the number of nodes.
 *
 * @param l The head of the linked list.
 * @return The number of nodes in the list.
 *
 * @note The function does not modify the list.
 */
int length_of_list(list l);

/**
 * @brief Prints the elements of a linked list.
 *
 * This function traverses the linked list and prints each element in order, 
 * separated by commas. The last element is followed by a period and a newline.
 *
 * @param l The head of the linked list.
 *
 * @note If the list is empty, the function prints "Empty list." 
 *       The function does not modify the list.
 */
void print_linked_list(list l);

/**
 * @brief Inserts a node into a sorted linked list while maintaining order.
 *
 * This function inserts the given node into the correct position 
 * in an ascending order sorted linked list.
 *
 * @param l A pointer to the head of the list.
 * @param node The node to be inserted.
 *
 * @note The function assumes that the input list is already sorted. 
 *       If the list is empty or `node` should be inserted at the beginning, 
 *       it updates the head pointer.
 */
void insertion_in_ordered_list(list *l, list node);

/**
 * @brief Frees all nodes in a linked list and sets the head pointer to NULL.
 *
 * This function iterates through the list, deallocating each node to 
 * prevent memory leaks. After freeing all nodes, it sets the head pointer to NULL.
 *
 * @param l A pointer to the head of the list.
 *
 * @note The function modifies the original list pointer, ensuring it does not 
 *       point to invalid memory after deallocation.
 */
void free_linked_list(list *l);

/**
 * @brief Checks if a linked list is empty.
 *
 * This function returns true if the list is empty (i.e., the head pointer is NULL), 
 * otherwise it returns false.
 *
 * @param l The head of the linked list.
 * @return true if the list is empty, false otherwise.
 */
bool is_empty(list l);

/**
 * @brief Reverses a linked list in-place.
 *
 * This function iterates through the linked list and reverses the order of nodes 
 * without allocating extra memory.
 *
 * @param l The head of the linked list to reverse.
 * @return The new head of the reversed linked list.
 *
 * @note The function modifies the original list.
 */
list reverse_list(list l);

/**
 * @brief Computes the intersection of two sorted linked lists.
 *
 * This function returns a new linked list containing only the elements 
 * that are present in both input lists, preserving the original order.
 *
 * @param l The first sorted linked list.
 * @param m The second sorted linked list.
 * @return A new linked list containing the common elements of l and m.
 *
 * @note The input lists must be sorted in ascending order.
 *       The returned list is dynamically allocated and should be freed after use.
 */
list intersection_of_list(list l, list m);

/**
 * @brief Checks if a linked list contains a cycle.
 *
 * This function uses Floyd's cycle detection algorithm (Tortoise and Hare)
 * to determine whether a given linked list has a cycle.
 *
 * @param l The head of the linked list.
 * @return `true` if the list contains a cycle, `false` otherwise.
 *
 * @note The function runs in O(n) time and uses O(1) extra space.
 */
bool contains_cycles(list l);

/**
 * @brief Concatenates two linked lists.
 *
 * This function appends list `m` to the end of list `l` and returns
 * the head of the concatenated list.
 *
 * @param l The first linked list.
 * @param m The second linked list to append.
 * @return The head of the concatenated list.
 *
 * @note This function modifies `l` by attaching `m` to its last node.
 *       If `l` is NULL, it simply returns `m`.
 */
list concatenate_lists(list l, list m);

/**
 * @brief Inserts list `m` into list `l` at position `n`.
 *
 * This function inserts the elements of list `m` into list `l` starting 
 * from the `n`-th position (0-based index). If `n == 0`, `m` is inserted 
 * at the beginning of `l`. If `l` is empty, the function returns `m`. 
 * If `m` is empty, the function returns `l`.
 *
 * @param l The first linked list.
 * @param m The second linked list to insert.
 * @param n The position in `l` where `m` should be inserted.
 * @return The head of the modified list.
 *
 * @note This function uses recursion, which may cause stack overflow for large `n`.
 *       Consider an iterative approach if `n` is large.
 */
list insertion_of_list(list l, list m, int n);

/**
 * @brief Splits a linked list into two halves.
 *
 * This function takes a linked list and splits it into two parts. 
 * The first part contains the first half (or the first half + 1 if the list has an odd number of elements),
 * and the second part contains the remaining elements.
 * If the list is empty, the function returns NULL.
 *
 * @param l The head of the linked list to be split.
 * @return The head of the second half of the list.
 *         If the list is empty, returns NULL.
 * 
 * @note The original list will have its first half removed and will point to the first element of the second half.
 */
list split_list(list l);

/**
 * @brief Removes duplicate elements from a sorted linked list.
 *
 * This function iterates through a sorted linked list and removes any duplicate elements.
 * It ensures that each value appears only once, maintaining the sorted order.
 *
 * @param l The head of the sorted linked list.
 * 
 * @note The function modifies the list in place and frees the memory of the removed nodes.
 */
void remove_duplicates_ordered_list(list l);

/**
 * @brief Splits a linked list into two halves.
 *
 * This function finds the middle of the list and splits it into two parts: 
 * the first half (`*left`) and the second half (`*right`).
 *
 * @param l The original list to split.
 * @param left Pointer to store the first half of the list.
 * @param right Pointer to store the second half of the list.
 */
list sort_linked_list(list l);

#endif /* ALGORITHM_H */
