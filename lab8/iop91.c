#include <stdio.h>

int main()
{
    int num, square, cube;
    int *ptr = &num;

    printf("Enter a number: ");
    scanf("%d", ptr);


    square = (*ptr) * (*ptr);
    cube = (*ptr) * (*ptr) * (*ptr);

    
    printf("Square of %d: %d\n", *ptr, square);
    printf("Cube of %d: %d\n", *ptr, cube);

    return 0;
}
