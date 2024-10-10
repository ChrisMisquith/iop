#include<stdio.h>

void main()
{
    float a, b, temp;

    printf("Enter first number:");
    scanf("%f", &a);

    printf("Enter second number:");
    scanf("%f", &b);

    a = a+b; // 10+20=30
    b = a-b; // 30-20=10
    a = a-b; // 30-10=20

    printf("First Number: %f", a);
    printf("Second Number: %f", b);

}
