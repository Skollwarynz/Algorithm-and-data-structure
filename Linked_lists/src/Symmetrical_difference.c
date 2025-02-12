   #include <stdio.h>
   #include <stdlib.h>
   #include "../include/linked_list.h"
   #include "../include/alghoritms.h"

   list symmetrical_difference(list l, list m){
        if(!l){
            return copy_list(m);
        }
        else if(!m){
            return copy_list(l);
        }
        else{
            if(l->n == m->n){
                return symmetrical_difference(l->next, m->next);
            }
            else if(l->n < m->n){
                return add_node(l->n, symmetrical_difference(l->next, m));
            }
            else{
                return add_node(m->n, symmetrical_difference(l, m->next));
            }
        }
   }