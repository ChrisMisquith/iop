#include<stdio.h>

void main()
{
    float a, m, h, d;

    a = 31558150; //EARTH TAKES A PERIOD OF REVOLUTION OF 31558150 SECONDS

    m = a/60;
    h = m/60;
    d = h/24;


    printf("Period of revolution in minutes: %f", m);
    printf("Period of revolution in hours: %f", h);
    printf("Period of revolution in days: %f", d);


}
