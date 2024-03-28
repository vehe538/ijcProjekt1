CC=gcc
CFLAGS= -g -std=c11 -pedantic -Wall -Wextra

all: error no-comment



error: error.c error.h
	$(CC) $(CFLAGS) error.c -o error


no-comment: no-comment.c error.h
	$(CC) $(CFLAGS) no-comment.c -o no-comment



clean:
	rm -f all
