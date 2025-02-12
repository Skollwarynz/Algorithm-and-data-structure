   #include <stdio.h>
   #include <stdlib.h>
   #include "../include/linked_list.h"
   #include "../include/alghoritms.h"

   list delete_occurencies(list l, int value){
        if(!l){
            return NULL;
        }
        else{
            if(l->n == value){
                list m = l->next;
                free(l);
                return delete_occurencies(m, value);
            }
            else{
                l->next = delete_occurencies(l->next, value);
                return l;
            }
        }
   }