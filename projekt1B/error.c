// error.c
// Řešení IJC-DU1, příklad b), 25.3.2024
// Autor: Juraj Mesík, FIT
// Přeloženo: gcc version 11.4.0


#include <stdio.h>
#include "error.h"

extern void warning(const char *fmt, ...);
extern void error_exit(const char *fmt, ...);

int main(){

    warning("-- warning text --");
    error_exit("-- error text --, exiting..");
    

    return 0;

}