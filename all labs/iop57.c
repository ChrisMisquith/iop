#include <stdio.h>
void main()
{
    int n,p=0,z=0,i=0;
    printf("enter how many numbers you want to enter: \n");
    scanf("%d",&n);
    int a[n];
    printf("enter the numbers: \n");
    for(int i = 0; i<n ; i++)
    {
        scanf("%d", &a[i]);
    }
    for(int i = 0; i<n; i++)
    {
        if(a[i]>p)
        {
            p=a[i];
        }
    }
    for(int i = 0; i<n; i++)
    {
        if(a[i]>z && a[i]<p)
        {
            z=a[i];
        }
    }
    printf("First max: %d and second max: %d \n",p,z);
}
