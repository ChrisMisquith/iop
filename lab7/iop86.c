#include <stdio.h>

int findStringLength(char str[])
{
    int length = 0;


    while (str[length] != '\0')
    {
        length++;
    }

    
    if (str[length - 1] == '\n')
    {
        length--;
    }

    return length;
}

int main()
{
    char text[100];


    printf("Enter a line of text: ");
    fgets(text, sizeof(text), stdin);


    int length = findStringLength(text);
    printf("The length of the string is: %d\n", length);

    return 0;
}
