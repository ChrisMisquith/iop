#include <stdio.h>

int main()
{
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the array:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int low = 0, high = n - 1, pivot = -1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (mid < high && arr[mid] > arr[mid + 1])
        {
            pivot = mid;
            break;
        }
        if (mid > low && arr[mid] < arr[mid - 1])
        {

            pivot = mid - 1;
            break;
        }

        if (arr[low] >= arr[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    if (pivot != -1)
        printf("Pivot element is %d at index %d.\n", arr[pivot], pivot);
    else
        printf("No pivot found.\n");

    return 0;
}
