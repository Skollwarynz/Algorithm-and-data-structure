   #include <stdio.h>
   #include <stdlib.h>
   #include "../include/linked_list.h"
   #include "../include/alghoritms.h"

   void free_linked_list(list *l){
        list tmp = *l;
        while(tmp != NULL){
            list link = tmp;
            tmp = tmp->next;
            free(link);
        }
        *l = NULL;
        return; 
   }