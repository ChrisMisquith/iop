#include<stdio.h>

void main()
{
    float a,b,c,d,e,g;
    printf("enter income then click enter for each income respectively:");
    scanf("%f%f%f%f%f", &a, &b, &c, &d, &e);

    g = a+b+c+d+e;

    printf("gross salary: %f", g);
}
