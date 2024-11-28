#include <stdio.h>

int isPrime(int num)
{
    if (num <= 1)

    {
        return 0;
    }
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return 0; // If not prime
        }
    }
    return 1; // Number is prime
}

int main()
{
    int num;

    // Test case
    num = 7;
    printf("Is %d prime? %d\n", num, isPrime(num)); Expected output: 1

    return 0;
}
