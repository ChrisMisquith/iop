#include <stdio.h>
void main()
{
    int a[10],e=0,o=0;
    printf("enter the numbers: \n");
    for(int i = 0; i<10; i++)
    {
        scanf("%d", &a[i]);
    }
    for(int i = 0; i<10; i++)
    {
        if(a[i]%2==0)
        {
            e=e+1;
        }
        if(a[i]%2==1)
        {
            o=o+1;
        }
    }
    printf("Odd no: %d and Even no: %d \n",o,e);

}
