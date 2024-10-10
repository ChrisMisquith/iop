#include <stdio.h>

void main()
{
    float a,f;

    printf("Enter temperature in fahrenheit:");
    scanf("%f", &a);

    f = (a*(5/9)+32);
    

    printf("Celsius: %f", f);


}
