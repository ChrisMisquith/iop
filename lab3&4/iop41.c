#include<stdio.h>
void main()
{
    int n,i;
    printf("Enter no. for factors: ");
    scanf("%d",&n);

    for(i=2;i<=n;i++)
    {
        if(n%i==0)
        {
            printf("%d, \n", i);
        }
    }
}
