#include <stdio.h>

int lenWithSpaces(char *s)
{
    int len = 0;
    while (*s != '\0')
    {
        len++;
        s++;
    }
    return len;
}

int lenWithoutSpaces(char *s)
{
    int len = 0;
    while (*s != '\0')
    {
        if (*s != ' ')
        {
            len++;
        }
        s++;
    }
    return len;
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

 
    char *p = str;
    while (*p != '\0')
    {
        if (*p == '\n')
        {
            *p = '\0';
            break;
        }
        p++;
    }

    int len1 = lenWithSpaces(str);
    int len2 = lenWithoutSpaces(str);

    printf("Length including spaces: %d\n", len1);
    printf("Length excluding spaces: %d\n", len2);

    return 0;
}
