#include <stdio.h>
#include "error.h"

extern void warning(const char *fmt, ...);
extern void error_exit(const char *fmt, ...);

int main(){

    warning("-- warning text --");
    error_exit("-- error text --, exiting..");
    

    return 0;

}