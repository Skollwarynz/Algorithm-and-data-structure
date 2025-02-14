   #include <stdio.h>
   #include <stdlib.h>
   #include "../include/linked_list.h"
   #include "../include/alghoritms.h"
   #include <errno.h>

   void insertion_in_ordered_list ( list *l, list node){
        if(!node){
            perror("Invalid node");
            return; 
        }
        if(!(*l)){
            *l = node;
            return;
        }
        list tmp = *l;
        list link = NULL;
        while(tmp!=NULL){
            if(tmp->n > node->n){
                if(!link){
                    node->next = tmp;
                    *l = node;
                    return;
                }
                node->next = tmp;
                link->next = node;
                return;
            }
        link = tmp;
        tmp = tmp->next;
        }
    link->next = node;
    node->next = NULL;
   }