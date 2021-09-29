#include <stdio.h>
float power(float n, int m);
int main()
{
    int n;
    printf("Input number:\n");
    scanf("%d", &n);
    float value = 0.5;
    for (int i =0;i<n+1;i++){
        value += power(0.5, i);
    }
    printf("%f", value);
    return 0;
}
float power(float n, int m){
    //raise n to the power of m
    float value = n;
    for(int i=1; i<m; i++){
        value = value * n;
    }
    return value;
}
