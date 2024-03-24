CC=gcc
CFLAGS= -g -std=c11 -pedantic -Wall -Wextra

all: primes error no-comment

primes: primes.c
	$(CC) $(CFLAGS) primes.c -o primes

error: error.o
	$(CC) $(CFLAGS) error.o -o error

error.o: error.c error.h
	$(CC) $(CFLAGS) error.c -o error.o




no-comment: no-comment.c
	$(CC) $(CFLAGS) no-comment.c -o no-comment



clean:
	rm -f all
