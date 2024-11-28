#include <stdio.h>
#include <math.h>

int flip(int num, int n)
{
    int lastDigits = num % (int)pow(10, n);
    int remaining = num / (int)pow(10, n);

    int flipped = 0;
    while (lastDigits > 0)
    {
        flipped = flipped * 10 + lastDigits % 10;
        lastDigits /= 10;
    }

    return remaining * pow(10, n) + flipped;
}

int main()
{
    int num, n;
    printf("Enter number: ");
    scanf("%d", &num);
    printf("Enter number of digits to flip: ");
    scanf("%d", &n);

    printf("Flipped number: %d\n", flip(num, n));

    return 0;
}
