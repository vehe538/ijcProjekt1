#include <stdio.h>


inline void bitset_create(unsigned long arr_name[], int size){

    arr_name[size] = {0};
    arr_name[0] = size;
    //printf("%s = pole %d bitov, vynulovane\n", arr_name, size);

} 

