#include<stdio.h>

void main()
{
    int a, b=0, temp, n;
    printf("Enter no: ");
    scanf("%d", &n);
    temp = n;

    while(temp > 0)
    {
        a=temp%10;
        b=b+a;
        temp=temp/10;
    }
    printf("sum: %d \n", b);
}
