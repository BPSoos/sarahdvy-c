#include <stdio.h>
#include "primszamok.h"
// az "isPrime" funkcio kulon van definialva a "primszamok.h" nevu faljban

int nextPrime (int n);

int main()
{
    printf("Primtenyezos felbontas\n");
    printf("Kerem a szamot:\n");
    int n;
    scanf("%d", &n);
    printf("Eredmeny:\n", isPrime(n));
    if (isPrime(n)){
        printf("%d \n", n);
    }else{
        int prime = 2;
        while ((float)n/(float)prime != 1){
            if (n % prime == 0){
                printf("%d ", prime);
                n = n/prime;
            }else{
                prime = nextPrime(prime);
            }
        }
        printf("%d\n", prime);
    }
    return 0;
}

int nextPrime(int n){
    do{
        n += 1;
    }while(!isPrime(n));
    return n;
}
