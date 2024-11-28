#include<stdio.h>

void main()
{
    int n,a=0,i,b=0;
    printf("Enter n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        if(i%2==0)
        {
            a=a+i;
        }
        if(i%2==1)
        {
            b=b+i;
        }

    }
    printf("\n The Sum of Even Numbers upto %d  = %d", n, a);
  printf("\n The Sum of Odd Numbers upto %d  = %d", n, b);

}
