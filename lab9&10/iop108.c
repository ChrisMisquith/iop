#include <stdio.h>

void copyStr(char *src, char *dest)
{
    while (*src)
    {
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';
}

int compareStr(char *str1, char *str2)
{
    while (*str1 && (*str1 == *str2))
    {
        str1++;
        str2++;
    }
    return *str1 - *str2;
}

void concatStr(char *str1, char *str2)
{
    while (*str1)
        str1++;
    while (*str2)
    {
        *str1 = *str2;
        str1++;
        str2++;
    }
    *str1 = '\0';
}

void reverseStr(char *str)
{
    int len = 0;
    while (str[len])
        len++;

    for (int i = 0; i < len / 2; i++)
    {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

int main()
{
    char str1[100], str2[100];

    printf("Enter string 1: ");
    gets(str1);

    printf("Enter string 2: ");
    gets(str2);

    char copy[100];
    copyStr(str1, copy);
    printf("Copied string: %s\n", copy);

    int cmp = compareStr(str1, str2);
    if (cmp == 0)
        printf("Strings are equal.\n");
    else
        printf("Strings are not equal.\n");

    concatStr(str1, str2);
    printf("Concatenated string: %s\n", str1);

    reverseStr(str1);
    printf("Reversed string: %s\n", str1);

    return 0;
}
