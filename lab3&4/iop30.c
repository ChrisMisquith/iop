#include<stdio.h>

void main()
{
    int a=0 , temp, n;
    printf("Enter no: ");
    scanf("%d", &n);
    temp = n;

    while(temp > 0)
    {
        a=a*10;
        a=a+temp%10;
        temp=temp/10;
    }
    printf("reverse: %d \n", a);
}
