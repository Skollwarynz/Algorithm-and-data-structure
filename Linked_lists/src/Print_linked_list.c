   #include <stdio.h>
   #include <stdlib.h>
   #include "../include/linked_list.h"
   #include "../include/alghoritms.h"

   void print_linked_list(list l){
    if(!l){
        printf("NULL.\n");
        return;
    }
        list tmp = l;
        while(tmp!=NULL){
            printf("%d",tmp->n);
            if(tmp->next != NULL){
                printf(", ");
            }
            tmp = tmp->next;
        }
    printf(".\n");
   }