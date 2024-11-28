#include <stdio.h>

int isVowel(char ch)
{

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        return 1; // vowel
    } else
    {
        return 0; // not vowel
    }
}

int main()
{
    char ch;


    printf("Enter a character: ");
    scanf("%c", &ch);

    
    if (isVowel(ch))
    {
        printf("%c is a vowel.\n", ch);
    } else
    {
        printf("%c is not a vowel.\n", ch);
    }

    return 0;
}
