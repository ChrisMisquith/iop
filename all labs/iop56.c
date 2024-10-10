#include <stdio.h>
void main()
{
    int a[10],n=0,p=0,z=0;
    printf("enter the numbers: \n");
    for(int i = 0; i<10; i++)
    {
        scanf("%d", &a[i]);
    }
    for(int i = 0; i<10; i++)
    {
        if(a[i]>0)
        {
            p=p+1;
        }
        else if(a[i]<0)
        {
            n=n+1;
        }
        else
        {
            z=z+1;
        }
    }
    printf("Positive no: %d, Negative no: %d and zero: %d \n",p,n,z);

}
