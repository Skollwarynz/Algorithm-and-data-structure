#include <stdio.h>
#include <stdlib.h>
#include "../include/string_alghoritms.h"

void reverse_string(char* s){
    int i = 0; 
    int j = string_lenght(s);
    while(i<j){
        char dummy = s[i];
        s[i] = s[j];
        s[j] = dummy;
        i++;
        j--;
    }
}