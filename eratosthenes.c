#include <stdio.h>
#include <math.h>

#include "bitset.h"
#include "bitset.c"


void Eratosthenes(bitset_t arr) {



    bitset_create(arr, 10000);
    unsigned long *ptr = bitset_alloc(arr, 10000);
    unsigned long n = bitset_size(arr);

    bitset_fill(arr, 1);
    bitset_setbit(arr, 0, 0);
    bitset_setbit(arr, 1, 0);

    //printf("%ld\n", arr[0]);

    //unsigned long n = bitset_size(arr);

    for (unsigned long j = 2; j <= n; j++){

        if (arr[j] == 1){
            printf("%lu\n", j);
        } 

        for (unsigned long k = j+1; k < n; k++){
            if (k % j == 0 && arr[k] != 0){
                arr[k] = 0;

            }
        }

        
    }
    bitset_free(ptr);
    
}

