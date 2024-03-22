#include <stdio.h>
#include <math.h>

void Eratosthenes() {

    int n = 10000;
    int m = 0;
    int all[n];
    int primes[n];

    int c = 0;
    for (int i = 2; i <= n; i++){
        all[c] = i;
        c++;
    }

    c = 0;
    for (int j = 2; j <= n; j++){
        for (int c = 0; c < n; c++){
            if (all[c] != j && all[c] % j == 0 && all[c] != 0){
                all[c] = 0;

            }
        }
        
    }

    for (int i = 0; i < n; i++){
        if (all[i] != 0){
            primes[m] = all[i];          
	    m++;
        }
    }

    for (int j = m-10; j < m; j++){
    
	    printf("%d\n", primes[j]);
    
    }

    
}

int main(){

	
	Eratosthenes();

}

