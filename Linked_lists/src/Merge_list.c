   #include <stdio.h>
   #include "../include/linked_list.h"
   #include "../include/alghoritms.h"

   list merge(list l, list m){
      if(!l)
         return m;
      else if(!m)
         return l;
      else if(l->n < m->n){
         l->next = merge(l->next, m);
         return l;
      }   
      else{
      m->next = merge(l, m->next);
      return m;
      }
   }
