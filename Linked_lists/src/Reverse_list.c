   #include <stdio.h>
   #include <stdlib.h>
   #include <stdbool.h>
   #include "../include/linked_list.h"
   #include "../include/alghoritms.h"

   list reverse_list(list l){
        list prev = NULL;
        list current = l;
        list next = NULL;
        while(current != NULL){
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
    return prev;
   }