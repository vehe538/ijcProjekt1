#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "eratosthenes.c"
#include "bitset.h"
/*
#define bitset_create(arr_name, size) unsigned long arr_name[size];
#define bitset_alloc(arr_name, size) typeof(arr_name) *ptr = malloc(size*4); if (ptr == NULL) {perror("bitset_alloc: Chyba alokace paměti"\n)} return 1;
#define bitset_free(arr_name) free(ptr);
#define bitset_size(arr_name) 
#define bitset_fill(arr_name, tf)
#define bitset_setbit(arr_name, index, tf)
#define bitset_getbit(arr_name, index)*/ 


int main() {

    bitset_t arr;
    Eratosthenes(arr);

}