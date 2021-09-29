#include <stdio.h>

int main(void){
    int n, i, f;
    printf("Adj egy szamot!");
    scanf("%d",&n);//beolvas, %d:egész
    // &változó scanf-ben így kötelezo˝
    i=1; f=1;
    while(i<=n){ //ciklus
    f=f*i; // indentálás: látvány
    i=i+1; // tükrözze a m˝uködést
    }
    printf("%d fakt: %d\n", n, f);
    /* ↑n ↑f */
    return 0;
}
