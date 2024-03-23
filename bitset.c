#include <stdbool.h>

#include "bitset_create.h"
#include "bitset_alloc.h"
#include "bitset_free.h"
#include "bitset_size.h"
#include "bitset_fill.h"
#include "bitset_setbit.h"
#include "bitset_getbit.h"


extern void bitset_create(unsigned long arr_name[], unsigned long size);
extern unsigned long *bitset_alloc(unsigned long arr_name[], unsigned long size);
extern void bitset_free(unsigned long *ptr_name);
extern unsigned long bitset_size(unsigned long arr_name[]);
extern void bitset_fill(unsigned long arr_name[], bool tf);
extern void bitset_setbit(unsigned long arr_name[], unsigned long x, bool tf);
extern unsigned long bitset_getbit(unsigned long arr_name[], unsigned long x);

