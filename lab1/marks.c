#include<stdio.h>

void main()
{
    float a,b,c,d,e,t,p;
    printf("enter marks then click enter for each subject respectively:");
    scanf("%f%f%f%f%f", &a, &b, &c, &d, &e);

    t = a+b+c+d+e;
    p = t/5;

    printf("total marks: %f", t);
    printf("percentage: %f", p);
}
