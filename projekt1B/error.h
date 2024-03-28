// error.h
// Řešení IJC-DU1, příklad b), 25.3.2024
// Autor: Juraj Mesík, FIT
// Přeloženo: gcc version 11.4.0



#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>




void warning(const char *fmt, ...){

	va_list args;
	va_start(args, fmt);

	fprintf(stderr, "warning: ");
	vfprintf(stderr, fmt, args);
	fprintf(stderr, "\n");


	va_end(args);

}


void error_exit(const char *fmt, ...){

	va_list args;
	va_start(args, fmt);

	fprintf(stderr, "error: ");
	vfprintf(stderr, fmt, args);
	fprintf(stderr, "\n");

	va_end(args);

	exit(1);

}
