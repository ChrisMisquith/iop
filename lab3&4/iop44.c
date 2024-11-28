#include<stdio.h>
void main()
{
    float c,u,a,b;
    printf("Enter electrical units: ");
    scanf("%f", &u);
    if(u<=200)
    {
        c=u*0.5;
    }
    else if(u<=400)
    {
        a=u-200;
        c=(a*0.65)+100;
    }
    else if(u<=600)
    {
        b=u-400;
        c=(b*0.80)+230;
    }
    else if(u>600)
    {
        c=(u*125)+425;
    }
    printf("Charges: %f \n", c);
}
