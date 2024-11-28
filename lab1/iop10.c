#include<stdio.h>

void main()
{
float m, p, c, e, cm;

    printf("Enter math marks:");
    scanf("%f", &m);

    printf("Enter physics marks:");
    scanf("%f", &p);

    printf("Enter chemistry marks:");
    scanf("%f", &c);

    printf("Enter entrance exam marks:");
    scanf("%f", &e);

    cm = (m/2)+(p/2)+(c/2)+e;

    printf("Cutoff marks: %f", cm);
}
