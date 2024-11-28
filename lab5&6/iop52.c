#include<stdio.h>
void main()
{
    int n,sum=0,a=1,prod;
    printf("Enter number of  rows\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            printf(" ");

        }
        while(a<=i)
        {
            sum=sum*10+1;
            a=a+1;
        }
        prod=sum*sum;
        printf("%d",prod);
        printf("\n");

    }
}
