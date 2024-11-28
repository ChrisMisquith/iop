#include<stdio.h>

void main()
{
    float a, b, c, x, y, z;

    printf("Enter current hour:");
    scanf("%f", &a);

    printf("Enter current minute:");
    scanf("%f", &b);

    printf("Enter current second:");
    scanf("%f", &c);

    x = a*60*60;
    y = b*60;
    z = x+y+c;

    printf("Time in seconds: %f", z);
}
