CC=gcc


eratosthenes: eratosthenes.c
	$(CC) eratosthenes.c -o eratosthenes -lm

bitset: bitset.c
	$(CC) -g -std=c11 -pedantic -Wall -Wextra bitset.c -o bitset



