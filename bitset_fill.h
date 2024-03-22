#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


#include "bitset.h"


extern inline unsigned long bitset_size(char *arr_name);


inline unsigned long bitset_fill(char *arr_name, bool tf) {

	unsigned long n = bitset_size(arr_name);
		
	for (unsigned long i = 0; i < n; i++){
		
		if (tf == true){		
			arr_name[i] = 1;
		} else {
			arr_name[i] = 0;
		}
	}
	

}
