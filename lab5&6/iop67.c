#include<stdio.h>
void main()
{
    int a[3][3],b[3][3],s[3][3],r,c;
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
    printf("enter Matrix B values: ");
    {
        for(r=0;r<3;r++)
        {
            for(c=0;c<3;c++)
            {
                scanf("%d", &b[r][c]);
            }
        }
    }
    for(r=0;r<3;r++)
        {
            for(c=0;c<3;c++)
            {
                s[r][c]=a[r][c]-b[r][c];
            }
        }
    printf(" Matrix Sub values: ");
    {
        for(r=0;r<3;r++)
        {
            for(c=0;c<3;c++)
            {
                printf("%d \t", s[r][c]);
            }
            printf("\n");
        }
    }
}
