#include <stdio.h>
#include <math.h>

void armstrong(int n); 

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    armstrong(n);
    return 0;
}

void armstrong(int n)
{
    int c = n;
    int i, sum = 0, num_of_digits = 0;


    int temp = n;
    while (temp > 0)
    {
        temp = temp / 10;
        num_of_digits++;
    }


    while (n > 0)
    {
        i = n % 10;
        sum += pow(i, num_of_digits);
        n = n / 10;
    }

    if (sum == c)
    {
        printf("%d is an Armstrong number.\n", c);
    }
    else
    {
        printf("%d is not an Armstrong number.\n", c);
    }
}
