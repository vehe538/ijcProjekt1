#include <stdio.h>
#include <stdarg.h>




void warning(const char *fmt, ...){

	va_list ap;
		
	printf("Warning: \n");


}


void error_exit(const char *fmt, ...){

	
	printf("Error: \n");


}
