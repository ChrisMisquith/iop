#include<stdio.h>
void main()
{
    int a[3][3],min,max,r,c,sum1,tr[3][3];
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
    printf("transpose: \n");
    for(r=0;r<3;r++)
        {
            for(c=0;c<3;c++)
            {
                tr[r][c]=a[c][r];
                printf("%d \t", tr[r][c]);
            }
            printf("\n");

    }
}
