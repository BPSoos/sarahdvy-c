#include <stdio.h>

float circle_area(float r){
    return r * r * 3.14159265;
}

float circle_circumference(float r){
    return 2 * r * 3.14159265;
}

int main()
{
    printf("Tartaly festese\n");
    printf("Milyen magas?\n");
    float magas, atmero, eredmeny;
    scanf("%f", &magas);
    printf("Mennyi az atmeroje? \n");
    scanf("%f", &atmero);
    eredmeny = (2*circle_area(atmero/2) + magas * circle_circumference(atmero/2))/2;
    printf("%f", eredmeny);
    return 0;
}
