#include<stdio.h>
void main()
{
    int fmax=0,smax=0,n;

    while(n!=0)
    {
        printf("Enter no. (0 to stop): ");
        scanf("%d", &n);

        if(n>=fmax)
        {
            smax=fmax;
            fmax=n;
        }
        else if(n>smax)
        {
            smax=n;
        }
    }
    printf("First max: %d \n", fmax);
    printf("Second max: %d \n", smax);
}
