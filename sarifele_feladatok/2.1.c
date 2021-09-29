#include <stdio.h>

int main(void){
    int n;
    printf("Adj egy szamot!");
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        printf("|");
        for (int j=1;j<=n;j++){
            printf("%2d * %2d = %3d |", j, i, i*j);
        }
        printf("\n");
    }
}
