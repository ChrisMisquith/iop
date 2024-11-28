#include<stdio.h>
void main()
{
    int n, a=0, b=1,c;
    printf("how many times: ");
    scanf("%d",&n);
    printf("0, 1, ");


    for(n=n-2;n>=1;n--)
    {
        c=a+b;
        printf("%d, ", c);
        a=b;
        b=c;
    }
}
