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


		int state = 1;
		char ch;

		//char current_char;
		//int num_of_lines;
		while ((ch = fgetc(f)) != EOF){

			switch (state) {

				case 1:
					if (ch == '/'){
						state = 2;
					} else {
						printf("%c", ch);
						continue;
					}
					
				case 2:
					if (ch == '/'){
						state = 3;
					}
					else {
						printf("%c", ch);
						continue;
					}


				case 3:
					if (ch == '\n'){
						state = 1;
					}
				
			}
		}

		//printf("number of lines in the file: %d\n", num_of_lines);

		fclose(f);
	}
	
	return 0;

}
