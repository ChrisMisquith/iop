#include<stdio.h>

void main()
{
    float a,b,c,d,e,t,p;
    printf("enter marks then click enter for each subject respectively:");
    scanf("%f%f%f%f%f", &a, &b, &c, &d, &e);

    t = a+b+c+d+e;
    p = t/5;

    if(p >= 60 && p <= 100)
    printf("First Division\n");

    else if(p >= 50 && p < 60)
    printf("Second Division\n");

    else if(p >= 30 && p < 60)
    printf("Third Division\n");

    else if(p < 30)
    printf("Fail\n");

    else
    printf("Enter correct percentage\n");
}


