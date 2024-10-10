#include<stdio.h>

void main()
{
    int a, b, temp;

    printf("Enter number:");
    scanf("%d", &a);

    b = a%2;

    if (b == 1)
    {
        printf("number is odd\n");
    }
    else
    {
        printf("number is even\n");
    }
}
