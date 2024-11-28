#include<stdio.h>
void main()
{
    int fmax=0,smax,n;

    while(n!=0)
    {
        printf("Enter no. (0 to stop): ");
        scanf("%d", &n);

        if(n>=fmax)
        {
            smax=fmax;
            fmax=n;
        }
        else if(n<smax && n!=0)
        {
            smax=n;
        }
    }
    printf("First max: %d \n", fmax);
    printf("Least: %d \n", smax);
}
