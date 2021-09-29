#include <stdio.h>
int factorial(int n);
int main()
{
    int n;
    printf("Input number:\n");
    scanf("%d", &n);
    float value = 0;
    for(int i=0; i<=n; i++){
        value = value + (float)1/factorial(i);
    }
    printf("%f", value);
    return 0;
}

int factorial(int n){
    //calculate factorial of n
    int value = 1;
    for(int i=1; i<=n; i++){
        value = i*value;
    }
    return value;
}
