#include<stdio.h>
void main()
{
    int a[3][3],min,max,r,c;
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
    min=max=a[0][0];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(a[i][j]<min)
            {
               min= a[i][j];
            }
            if(a[i][j]>max)
            {
                max= a[i][j];
            }
        }
    }
    printf("Minimum element: %d\n", min);
    printf("Maximum element: %d\n", max);
}
