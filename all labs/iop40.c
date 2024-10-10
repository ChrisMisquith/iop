#include<stdio.h>
void main()
{
    float n=0,s=0;

    while(n>=0)
    {
        if(n<0)
        {
            break;
        }
        s=s+n;
        printf("Enter numbers for sum(negative no. to exit): ");
        scanf("%f",&n);
    }
    printf("sum: %f", s);
}
