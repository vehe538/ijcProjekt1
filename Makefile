CC=gcc


all: primes.c

primes: primes.c
	$(CC) -O2 -g -std=c11 -pedantic -Wall -Wextra primes.c -o primes



clean:
	rm -f all
