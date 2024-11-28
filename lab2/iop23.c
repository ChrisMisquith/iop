#include<stdio.h>

void main()
{
    double a,b,c=1,i;
    printf("Enter number: ");
    scanf("%lf", &a);

    printf("Enter power: ");
    scanf("%lf", &b);

    while(b > 0)
    {
        c=c*a;
        b--;
    }
    printf("power: %lf \n", c);
}
