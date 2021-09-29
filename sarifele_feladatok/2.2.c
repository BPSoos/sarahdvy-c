#include <stdio.h>

int main(void){
    int n, m, eredmeny;
    printf("Adj egy szamot!");
    scanf("%d",&n);
    printf("Adj meg egy szamot!");
    scanf("%d",&m);
    if(n<m){
        eredmeny=n;
    }else{
        eredmeny=m;
    }
    while(!(n%eredmeny==0) || !(m%eredmeny==0)){
        eredmeny -= 1;
    }
    printf("LNKO (brute force): %d", eredmeny);
    \\ euklideszi algoritmus here
}
