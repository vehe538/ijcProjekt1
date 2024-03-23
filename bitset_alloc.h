#include <stdio.h>
#include <stdlib.h>

//#include "bitset_alloc.h"


inline unsigned long *bitset_alloc(unsigned long arr_name[], unsigned long size){


    unsigned long *ptr = (unsigned long *) malloc(sizeof(arr_name[0])+size*sizeof(unsigned long));

    if (ptr == NULL){
        perror("bitset_alloc: Chyba alokace paměti\n");
    }
    
    return ptr;

}