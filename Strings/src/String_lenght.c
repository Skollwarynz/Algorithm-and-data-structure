#include <stdio.h>
#include <stdlib.h>
#include "../include/string_alghoritms.h"

int string_lenght(char* s){
    int i = 0;
    while(s[i] != '\0'){
        i++;
    }
    return i-1;
}