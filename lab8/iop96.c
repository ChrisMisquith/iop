#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char *s[100];
    int n, i, j;

    printf("Enter the number of strings: ");
    scanf("%d", &n);
    getchar();

    for (i = 0; i < n; i++)
    {
        s[i] = (char *)malloc(100 * sizeof(char));
        if (s[i] == NULL)
        {
            printf("Memory allocation failed\n");
            return 1;
        }
    }

    printf("Enter the strings:\n");
    for (i = 0; i < n; i++)
    {
        fgets(s[i], 100, stdin);
        s[i][strcspn(s[i], "\n")] = '\0';
    }

    printf("The input strings are:\n");
    for (i = 0; i < n; i++)
    {
        puts(s[i]);
    }

    char temp[100];
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (strcmp(s[i], s[j]) > 0)
            {
                strcpy(temp, s[i]);
                strcpy(s[i], s[j]);
                strcpy(s[j], temp);
            }
        }
    }

    printf("The sorted strings are:\n");
    for (i = 0; i < n; i++)
    {
        puts(s[i]);
    }

    for (i = 0; i < n; i++)
    {
        free(s[i]);
    }

    return 0;
}
