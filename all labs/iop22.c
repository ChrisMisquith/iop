#include<stdio.h>

void main()
{
    int a,c;
    printf("Enter number:");
    scanf("%d",&a);
    c=1;
    while(a > 0)
    {
        c = c * a;
        a--;
    }
    printf("Factorial: %d",c);
}
