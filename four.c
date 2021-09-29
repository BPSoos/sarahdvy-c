#include <stdio.h>
void piramid_asc(int length);
void piramid_desc(int length);
int main()
{
    int n;
    printf("Input number:\n");
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        piramid_asc(i);
    }
    for(int i=n; i>0; i--){
        piramid_desc(i);
    }   
    return 0;
}

void piramid_asc(int length){
    for(int i=0; i<length; i++){
        printf("#");
    }
    printf("\\\n");
}
void piramid_desc(int length){
    for(int i=length; i>1; i--){
        printf("@");
    }
    printf("/\n");
}
