#include <stdio.h>

int main()
{
    printf("Haromszog rajzolas\n");
    float a, b, c;
    printf("Elso oldalhossz:\n");
    scanf("%f", &a);
    printf("Masodik oldalhossz:\n");
    scanf("%f", &b);
    printf("Harmadik oldalhossz:\n");
    scanf("%f", &c);
    if ( a + b > c && a + c > b && b + c > a){ printf("Lehetseges haromszog\n"); } else{ printf("Nem lehetseges haromszog\n"); }
    return 0;
}
