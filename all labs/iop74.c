#include <stdio.h>

int main() {
    int n1, n2;

    printf("Enter number of elements in array A: ");
    scanf("%d", &n1);
    int A[n1];
    printf("Enter elements of array A (sorted in ascending order):\n");
    for (int i = 0; i < n1; i++)
        scanf("%d", &A[i]);

    printf("Enter number of elements in array B: ");
    scanf("%d", &n2);
    int B[n2];
    printf("Enter elements of array B (sorted in ascending order):\n");
    for (int i = 0; i < n2; i++)
        scanf("%d", &B[i]);

    int C[n1 + n2];
    int i = 0, j = 0, k = 0;

    while (i < n1 && j < n2) {
        if (A[i] < B[j])
            C[k++] = A[i++];
        else
            C[k++] = B[j++];
    }

    while (i < n1)
        C[k++] = A[i++];

    while (j < n2)
        C[k++] = B[j++];

    printf("\nMerged array C:\n");
    for (int i = 0; i < n1 + n2; i++)
        printf("%d ", C[i]);
    printf("\n");

    return 0;
}
