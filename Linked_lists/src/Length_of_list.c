   #include <stdio.h>
   #include <stdlib.h>
   #include "../include/linked_list.h"
   #include "../include/alghoritms.h"

   int length_of_list(list l){
        int size = 0;
        list tmp = l;
        while(tmp != NULL){
            size++;
            tmp = tmp->next;
        }
        return size;
   }