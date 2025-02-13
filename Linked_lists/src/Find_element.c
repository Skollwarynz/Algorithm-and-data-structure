   #include <stdio.h>
   #include <stdlib.h>
   #include "../include/linked_list.h"
   #include "../include/alghoritms.h"

   list find_element(int value, list l){
        list tmp = l;
        while(tmp != NULL){
            if(tmp->n == value){
                return tmp;
            }
            tmp = tmp->next;
        }
        return NULL;
   }