#include<stdio.h>
int main()
{
int a,b,c,big;
printf("\n Enter 3 numbers:");
scanf("%d %d %d",&a,&b,&c);
big=(a>b&&a>c?a:b>c?b:c);
printf("\n The largest number is:%d \n",big);
}

