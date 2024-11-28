#include<stdio.h>
void main()
{
    char op;
    float a,b;

    printf("Enter operator for(* / + -):");
    scanf("%c", &op);

    printf("Enter two numbers for calculation:");
    scanf("%f%f", &a, &b);

    switch (op)
    {
        case '+':
        printf("%f + %f= %f \n", a, b, a + b);
        break;

        case '-':
        printf("%f - %f= %f \n", a, b, a - b);
        break;

        case '*':
        printf("%f * %f= %f \n", a, b, a * b);
        break;

        case '/':
        printf("%f / %f= %f \n", a, b, a / b);
        break;
    }
}
