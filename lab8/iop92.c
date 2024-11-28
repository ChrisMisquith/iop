#include <stdio.h>

int main()
{
    int n, i, max;
    int *ptr;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    ptr = arr;

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", (ptr + i));
    }

    max = *ptr;
    for (i = 1; i < n; i++)
    {
        if (*(ptr + i) > max)
        {
            max = *(ptr + i);
        }
    }

    printf("The largest number is: %d\n", max);

    return 0;
}
