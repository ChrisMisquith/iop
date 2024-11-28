#include<stdio.h>
void main()
{
    int n,i,j;
    printf("enter the no.: ");
    scanf("%d", &n);

    for(int i=1;i<=n;i++)
    {
        for(j=65;j<65+i;j++)
        {
            printf("%c", j);
        }
        printf("\n");
    }
}
