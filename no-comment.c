#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>

#include "error.h"


extern void error_exit(const char *fmt, ...);



int main(int argc, char *argv[]){	


	if (argc == 0){

		char x[100];
		scanf("%s", x);

	} else {
		

		FILE *f = fopen(argv[1], "r");
		
		if (f == NULL){
			error_exit("error: invalid file.");
		}


		int state = 1;
		char ch;

		while ((ch = fgetc(f)) != EOF){

			switch (state) {

				case 1:
					if (ch == '/'){   //hladam prvy '/'
						state = 2;
					} else if (ch == '"') { // hladam prve '"'
						printf("%c", ch);
						state = 6;
					} else {
						printf("%c", ch);
					}
					break;

				case 2:
					if (ch == '/'){    // hladam druhy '/' pre jednoriadkove komentare
						state = 3;
					} else if ( ch == '*'){   // hladam '*' pre viacriadkove komentare
						state = 4;
					} else {
						printf("%c", ch);
						state = 1;
					}
					break;

				case 3:
					if (ch == '\n'){  // hladam koniec riadku pre ukoncenie jednoriadkovych kom.
						state = 1;
					} else {
						printf(" ");
					}
					break;

				case 4:
					if (ch == '*') {   // hladam druhe '*' pre ukoncenie viacriadkovych kom.
						state = 5;
					}
					break;

				case 5:
					if (ch == '/'){   // hladam druhe '/' pre ukoncenie viacriadkovych kom.
						state = 1;
					}
					break;

				case 6:		// kym nenajdem druhe ", vypisujem vsetko
					if (ch == '"') {
						printf("%c", ch);
						state = 1;
					} else {
						printf("%c", ch);
					}
					break;

				default:
					break;			
			}
		}
		fclose(f);
	
	}
}

