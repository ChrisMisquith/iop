#include <stdio.h>

int count_vowels(char *str)
{
    int count = 0;
    while (*str != '\0')
    {
        if (*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u' ||
            *str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U')
        {
            count++;
        }
        str++;
    }
    return count;
}

int main()
{
    char text[100];
    printf("Enter a string: ");
    fgets(text, sizeof(text), stdin);
    printf("Number of vowels: %d\n", count_vowels(text));
    return 0;
}
