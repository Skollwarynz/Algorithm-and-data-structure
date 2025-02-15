/**
 * @file Binary_tree_algorithm.h
 * @brief Declares functions for binary tree algorithms.
 *
 * This header file provides declarations for functions that operate 
 * on binary trees, including traversal and other algorithms.
 */

#ifndef BINARY_TREE_ALGORITHM_H
#define BINARY_TREE_ALGORITHM_H

#include "../include/Binary_tree_struct.h"

/**
 * @brief Prints the keys of a binary tree in in-order traversal.
 *
 * This function recursively traverses a binary tree in in-order (left, root, right) 
 * and prints each node's key.
 *
 * @param root The root of the binary tree.
 *
 * @note If the tree is empty, the function does nothing.
 */
void print_in_order_binary_tree(binary_tree root);

#endif /* BINARY_TREE_ALGORITHM_H */