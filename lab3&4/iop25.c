#include<stdio.h>

void main()
{
    float n,i=1;
    printf("enter number to print table of: ");
    scanf("%f", &n);

    while(i <= 10)
    {
       printf("%f*%f=%f \n", n, i, n*i);
       i++;
    }
}
