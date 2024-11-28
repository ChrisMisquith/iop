#include <stdio.h>
void main()
{
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);

    if (c >= 'a' && c <= 'z')
        printf("%c is a small alphabet\n", c);
    else if (c >= 'A' && c <= 'Z')
        printf("%c is a capital alphabet\n", c);
    else
        printf("invalid input");
}
