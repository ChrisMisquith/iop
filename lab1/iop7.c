#include<stdio.h>

void main()
{
    float a, b, ar;

    printf("Enter height:");
    scanf("%f", &a);

    printf("Enter length of base:");
    scanf("%f", &b);

    ar = (a*b)/2;

    printf("Area of triangle: %f", ar);
}
