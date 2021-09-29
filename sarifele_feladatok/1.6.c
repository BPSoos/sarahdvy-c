#include <stdio.h>

int main(void){
    int n, j;
    printf("Adj egy szamot!");
    scanf("%d",&n);
    j = 0;
    for (int i =1;i<n;i++){
        j += i;
    }
    printf("osszeg: %d ", j);
    j = 1;
    for (int i =1;i<n;i++){
        j += i*i;
    }
    printf("negyzetosszeg: %d ", j);
}
