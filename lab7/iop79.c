#include <stdio.h>

void exchange(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int x = 5, y = 10;

    printf("Before exchange: x = %d, y = %d\n", x, y);

    exchange(&x, &y);

    printf("After exchange: x = %d, y = %d\n", x, y);

    return 0;
}
