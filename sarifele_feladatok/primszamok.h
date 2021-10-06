#include <stdio.h>
#include <math.h>

int isPrime(int n)
{
    int divisor = 2;
    int divisible = 0;
    if (n < 4) {
        divisible = 0;
    }
    else{
        while (divisor < n && !divisible){
            if (n % divisor == 0){
                divisible = 1;    
            }
            divisor += 1;
        }
    }
    if (divisible){
        return 0;
    }else{
        return 1;
    }
}
