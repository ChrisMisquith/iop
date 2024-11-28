#include <stdio.h>

int main()
{
    char str[100], rev[100];
    char *ptr1 = str;
    char *ptr2 = rev;
    int length = 0;


    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);


    while (*ptr1 != '\0' && *ptr1 != '\n')
    {
        length++;
        ptr1++;
    }


    ptr1 = str + length - 1;


    while (length > 0)
    {
        *ptr2 = *ptr1;
        ptr1--;
        ptr2++;
        length--;
    }

    *ptr2 = '\0';

    
    printf("Reversed string: %s\n", rev);

    return 0;
}
