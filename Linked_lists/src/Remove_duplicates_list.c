   #include <stdio.h>
   #include <stdlib.h>
   #include "../include/linked_list.h"
   #include "../include/alghoritms.h"

   void remove_duplicates_ordered_list(list l){
        list tmp = l;
        list prev = NULL;
        while(tmp != NULL){
            if(prev && (tmp->n == prev->n)){
                list freerer = tmp;
                tmp = tmp->next;
                prev->next = tmp;
                free(freerer);
            }
            else{
                prev = tmp;
                tmp = tmp->next;
            }
        }
   }