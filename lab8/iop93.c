#include <stdio.h>
#include <ctype.h>

int countWords(char *str)
{
    int count = 1;

    while (*str != '\0')
    {
        if (*str == ' ')
        {
            count++;
        }

        str++;
    }

    return count;
}

int main()
{
    char str[200];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int wordCount = countWords(str); 
    printf("The number of words in the string is: %d\n", wordCount);

    return 0;
}
