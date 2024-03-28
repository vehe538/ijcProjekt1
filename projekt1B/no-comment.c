
   // no-comment.c
   // Řešení IJC-DU1, příklad b), 25.3.2024
   // Autor: Juraj Mesík, FIT
   // Přeloženo: gcc version 11.4.0
   // poznamka: makro SIZEOF_INPUT urcuje kolko char-ov sa naalokuje v main(), prosim zmenit podla velkosti vstupneho suboru

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/stat.h>
#include "error.h"

#define SIZEOF_INPUT 100
#define MY_FSA(ch, state) \
    do { \
        switch (state) { \
            case 1: \
                if (ch == '/') { \
                    state = 2; \
                } else if (ch == '"') { \
                    output[j] = ch; \
                    state = 6; \
                } else { \
                    output[j] = ch; \
                } \
                break; \
            case 2: \
                if (ch == '/') { \
                    state = 3; \
                    output[j-1] = ' '; \
                } else if (ch == '*') { \
                    state = 4; \
                } else { \
                    output[j] = ch; \
                    state = 1; \
                } \
                break; \
            case 3: \
                if (ch == '\n') { \
                    state = 1; \
                    output[j] = ch; \
                } \
                break; \
            case 4: \
                if (ch == '*') { \
                    state = 5; \
                } \
                break; \
            case 5: \
                if (ch == '/') { \
                    state = 1; \
                } \
                break; \
            case 6: \
                if (ch == '"') { \
                    output[j] = ch; \
                    state = 1; \
                } else { \
                    output[j] = ch; \
                } \
                break; \
            default: \
                break; \
        } \
    } while (0)


extern void error_exit(const char *fmt, ...);



int main(int argc, char *argv[]){	

	int state = 1;
    int j = 0;
    char *output =  malloc(sizeof(char)*SIZEOF_INPUT);


    if (output == NULL){

        error_exit("malloc fail.");

    }


	if (argc == 1){

		int i = 0;
		while ((i = getchar()) != EOF) {

			MY_FSA(i, state);
            j++;
		}

	} else {
		
		FILE *f = fopen(argv[1], "r");

	
		if (f == NULL){
			error_exit(" invalid file.");
		}

		char ch;
		while ((ch = fgetc(f)) != EOF){

			MY_FSA(ch, state);
            j++;
		}
		fclose(f);
	
	}
    
    for (int i = 0; i < j; i++){
        printf("%c", output[i]);
    }

    free(output);

    
}

