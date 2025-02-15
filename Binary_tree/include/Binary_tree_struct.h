/**
 * @file Binary_tree_struct.h
 * @brief Defines the structure for a binary tree.
 *
 * This header file contains the definition of a binary tree node 
 * and a type alias for ease of use.
 */

#ifndef BINARY_TREE_STRUCT_H
#define BINARY_TREE_STRUCT_H

/**
 * @struct binary_tree_struct
 * @brief Structure representing a node in a binary tree.
 *
 * Each node contains an integer key and pointers to its left and right children.
 */
typedef struct binary_tree_struct {
    int key;                      /**< The key value of the node. */
    struct binary_tree_struct* left;  /**< Pointer to the left child node. */
    struct binary_tree_struct* right; /**< Pointer to the right child node. */
} Binary;

/**
 * @typedef binary_tree
 * @brief Alias for a pointer to a binary tree node.
 */
typedef Binary* binary_tree;

#endif /* BINARY_TREE_STRUCT_H */
