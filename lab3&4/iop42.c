#include <stdio.h>

void main()
{
    int i, num, temp = 0;
    printf("Enter any n to Check for Prime: ");
    scanf("%d", &num);

    for (i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            temp++;
        }
    }
    if (temp == 0 && num != 1)
    {
        printf("%d is a Prime number \n", num);
    }
    else
    {
        printf("%d is a composite number \n", num);
    }
}
