#include<stdio.h>
void main()
{
    int a[3][3],min,max,r,c,sum1;
    printf("enter Matrix A values: ");
    {
        for(r=0;r<3;r++)
        {
            for(c=0;c<3;c++)
            {
                scanf("%d", &a[r][c]);
            }
        }
    }
    for(r=0;r<3;r++)
        {
            for(c=0;c<3;c++)
            {
                sum1=sum1+a[r][c];
            }
            printf("sum: %d \n",sum1);
            sum1=0;
    }
}
