#include <stdio.h>

int correctDivisors(int n);

int main(){
    printf("Irjuk ki az osszes haromjegyu szamot melynek osztoja a 2, 7, 13, de nem osztoja az 5 (brute force):\n");
    int n = 100;
    do{
        if (correctDivisors(n)){
            printf("%d ", n);
        }
    n += 1;
    }while(n < 1000);
    printf("\n");

}

int correctDivisors(int n){
    if ( n % 2  == 0 && n % 7  == 0 &&
         n % 13 == 0 && n % 5  != 0){
            return 1;     
        }else{
            return 0;
        }
}
