#include <stdio.h>

int main(void){
    int n, m, eredmeny;
    printf("Adj egy szamot!");
    scanf("%d",&n);
    printf("Adj meg egy szamot!");
    scanf("%d",&m);
    if(n<m){
        eredmeny=m;
    }else{
        eredmeny=n;
    }
    while(!(eredmeny%n==0) || !(eredmeny%m==0)){
        eredmeny += 1;
    }
    printf("LKKT (brute force): %d\n", eredmeny);
    return 0;
}
