#include <stdio.h>
#include <stdlib.h>
#include "../include/binary_tree_algorithms.h"
#include "../include/Binary_tree_struct.h"

void print_in_order_binary_tree(binary_tree root){
    if(!root){
        return;
    }
    else{
            print_in_order_binary_tree(root->left);
            printf(" %d ",root->key);
            print_in_order_binary_tree(root->right);
        }
}