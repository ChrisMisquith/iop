#include<stdio.h>
void main()
{
    float a,b;
    int op;

    printf("Enter operator for(+=1, -=2, *=3, /=4):");
    scanf("%d", &op);

    printf("Enter two numbers for calculation:");
    scanf("%f%f", &a, &b);

    switch (op)
    {
        case 1:
        printf("%f + %f= %f \n", a, b, a + b);
        break;

        case 2:
        printf("%f - %f= %f \n", a, b, a - b);
        break;

        case 3:
        printf("%f * %f= %f \n", a, b, a * b);
        break;

        case 4:
        printf("%f / %f= %f \n", a, b, a / b);
        break;
    }
}
