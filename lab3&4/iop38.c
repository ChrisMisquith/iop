#include<stdio.h>

void main()
{
             int i,num;
            printf("Enter the last number:");
           scanf("%d",&num);
             for(i=1;i*i<=num;i++)
             {
                      printf("\n%d",i*i);
             }
}
