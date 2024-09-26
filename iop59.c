#include <stdio.h>
void main()
{
    int a[10],b[10],c[10],n=0,p=0,z=0;
    printf("enter the numbers for array A: \n");
    for(int i = 0; i<10; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("enter the numbers for array B: \n");
    for(int i = 0; i<10; i++)
    {
        scanf("%d", &b[i]);
    }
    for(int i = 0; i<10; i++)
    {
        n=a[i];
        a[i]=b[i];
        b[i]=n;
    }
    printf("A array:\n");
    for(int i = 0; i<10; i++)
    {
        printf(" %d \t",a[i]);
    }
    printf("\n");
    printf("B array:\n");
    for(int i = 0; i<10; i++)
    {
        printf(" %d \t",b[i]);
    }
}
