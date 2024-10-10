#include<stdio.h>
void main()
{
    float c,s,a,b;
    printf("Enter sales value to calculate commision: ");
    scanf("%f", &s);
    if(s<=500)
    {
        c=s*0.05;
    }
    else if(s<=2000)
    {
        a=s-500;
        c=(a*0.1)+35;
    }
    else if(s<=5000)
    {
        b=s-2000;
        c=(b*0.12)+185;
    }
    else if(s>5000)
    {
        c=s*0.125;
    }
    printf("commission: %f \n", c);
}
