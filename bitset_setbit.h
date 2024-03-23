#include <stdio.h>
#include <stdbool.h>


inline void bitset_setbit(unsigned long arr_name[], unsigned long x, bool tf){

	if (tf == true){
	
		arr_name[x] = 1;
	
	} else {
		
		arr_name[x] = 0;
	
	}
	

}
