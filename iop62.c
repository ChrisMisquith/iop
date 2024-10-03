#include<stdio.h>
void main()
{
    int n,temp;
    printf("enter how many numbers you want to enter: \n");
    scanf("%d",&n);
    int a[n],b[n];
    printf("enter numbers: \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    printf("unreversed array: \n");
    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    printf("\n");
    printf("reversed array: \n");
    for(int i=n-1;i>=0;i--)
    {
        printf("%d",a[i]);
    }
    printf("\n");
}
