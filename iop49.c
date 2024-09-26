#include<stdio.h>
void main()
{
    int n,i,j,k;
    printf("enter the no.: ");
    scanf("%d", &n);

    for(int i=1;i<=n;i++)
    {
        for(k=1;k<=n-i;k++)
        {
            printf(" ");
        }

        for(j=1;j<=i;j++)
        {
            printf("*");
        }

        for(j=1;j<=i-1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
