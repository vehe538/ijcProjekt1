#include <stdio.h>
#include <stdlib.h>

extern unsigned long *ptr;

inline void bitset_free(unsigned long *ptr_name) {

     
    free(ptr_name);
    ptr_name = NULL;
    
}




