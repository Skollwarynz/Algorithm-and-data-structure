#include <stdio.h>

list merge(list l, list m){
  if(!l)
     return m;
  else if(!l)
     return l;
  else 
     if(l->n < m->n){
        l = merge(l->next,m);
        return l;
     else{
        m = merge(l,m->next);
        return m;
     }     
}
