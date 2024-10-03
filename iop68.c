#include <stdio.h>

int main()
{
    int size = 3;
    int a[3][3], b[3][3], c[3][3];

    printf("Enter the elements of the first 3x3 matrix:\n");
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
            scanf("%d", &a[i][j]);

    printf("Enter the elements of the second 3x3 matrix:\n");
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
            scanf("%d", &b[i][j]);

    //multiplication
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            c[i][j] = 0;
            for (int k = 0; k < size; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("Product of the two matrices:\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
