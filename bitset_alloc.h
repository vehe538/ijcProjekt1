#include <stdio.h>
#include <stdlib.h>

extern inline void bitset_create(unsigned long arr_name[], int size);

void inline bitset_alloc(char arr_name, int size){

    
    void *arr_name = malloc(size*(sizeof(int)));

    if (arr_name == NULL){
        perror("bitset_alloc: Chyba alokace paměti\n");
    }

}