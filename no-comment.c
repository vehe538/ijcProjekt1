#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char *argv[]){

	printf("%d\n", argc);

	if (argc == 0){

		char x[100];
		scanf("%s", x);

	} else {
		
		printf("%s\n", argv[1]);

		FILE *f = fopen("file.c", "r");


		int n;
		char ch;

		//char current_char;
		//int num_of_lines;
		while (ch != EOF){

			ch = fgetc(f);

			switch (ch) {

				case '/':
					printf("%c", ch);

			}
		}

		//printf("number of lines in the file: %d\n", num_of_lines);

		fclose(f);
	}
	
	return 0;

}