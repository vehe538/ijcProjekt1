#include <stdio.h>



inline void bitset_create(unsigned long arr_name[], unsigned long size){


    arr_name[0] = size;

    for (unsigned long i = 1; i < size; i++){

        arr_name[i] = 0;

    }

} 



