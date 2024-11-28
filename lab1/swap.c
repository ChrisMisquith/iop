#include<stdio.h>

void main()
{
    float a, b, temp;

    printf("Enter first number:");
    scanf("%f", &a);

    printf("Enter second number:");
    scanf("%f", &b);

    temp = a;
    a = b;
    b = temp;

    printf("First Number: %f", a);
    printf("Second Number: %f", b);

}


