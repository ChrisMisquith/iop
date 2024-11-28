#include <stdio.h>

void generateFibonacci(int n)
{
    int a = 0, b = 1, next;

    printf("First %d Fibonacci numbers:\n", n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }
    printf("\n");
}

int main()
{
    int n;

    // Test for n = 5
    n = 5;
    generateFibonacci(n);

    // Test for n = 10
    n = 10;
    generateFibonacci(n);

    // Test for n = 15
    n = 15;
    generateFibonacci(n);

    return 0;
}
