#include<stdio.h>
void main()
{
    int n,i,j;
    printf("enter the no.: ");
    scanf("%d", &n);

    for(int i=65;i<=n+64;i++)
    {
        for(j=65;j<=i;j++)
        {
            printf("%c", i);
        }
        printf("\n");
    }
}
