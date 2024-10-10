#include <stdio.h>
void main()
{
    int a[10],sum;
    printf("enter the numbers: \n");
    for(int i = 0; i<10; i++)
    {
        scanf("%d", &a[i]);
    }
    for(int i = 0; i<10; i++)
    {
        sum=sum+a[i];
    }
    printf("Sum: %d \n", sum);
}
