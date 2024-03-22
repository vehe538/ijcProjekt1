#include <stdio.h>
#include "bitset.h"
#include <boolean.h>

inline void bitset_setbit(char arr_name[], bitset_index_t x, bool tf){

	if (tf == true){
	
		arr_name[x] = 1;
	
	} else {
		
		arr_name[x] = 0;
	
	}
	

}
