    #include <stdio.h>
    #include <stdlib.h>
    #include "../include/linked_list.h"
    #include "../include/alghoritms.h"

void sort_helper(list l, list* first_half, list* second_half) {
    if (l == NULL || l->next == NULL) {
        *first_half = l;
        *second_half = NULL;
        return;
    }
    list slow = l;
    list fast = l->next;
    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }
    *first_half = l;
    *second_half = slow->next;
    slow->next = NULL;
}


list sort_linked_list(list l) {
    if (l == NULL || l->next == NULL)
        return l;
    
    list left, right;
    sort_helper(l, &left, &right);
    left = sort_linked_list(left);
    right = sort_linked_list(right);
    return merge(left, right);
}