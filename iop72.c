#include <stdio.h>

int main()
{
    int n, d;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the array:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter the number of positions to rotate: ");
    scanf("%d", &d);

    d = d % n;
    int temp[d];

    for (int i = 0; i < d; i++)
        temp[i] = arr[n - d + i];

    for (int i = n - 1; i >= d; i--)
        arr[i] = arr[i - d];

    for (int i = 0; i < d; i++)
        arr[i] = temp[i];

    printf("Rotated array:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
