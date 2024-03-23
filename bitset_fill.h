#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


inline void bitset_fill(unsigned long arr_name[], bool tf) {

	unsigned long n = 100;
		
	for (unsigned long i = 0; i < n; i++){
		
		if (tf == true){		
			arr_name[i] = 1;
		} else {
			arr_name[i] = 0;
		}
	}
	

}
