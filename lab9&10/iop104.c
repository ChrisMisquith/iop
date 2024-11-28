
#include <stdio.h>

enum Color {RED, GREEN, BLUE, YELLOW, WHITE, BLACK};

void showColorCode(enum Color c)
{
    switch (c)
    {
        case RED: printf("Hex code for Red: #FF0000\n"); break;
        case GREEN: printf("Hex code for Green: #00FF00\n"); break;
        case BLUE: printf("Hex code for Blue: #0000FF\n"); break;
        case YELLOW: printf("Hex code for Yellow: #FFFF00\n"); break;
        case WHITE: printf("Hex code for White: #FFFFFF\n"); break;
        case BLACK: printf("Hex code for Black: #000000\n"); break;
        default: printf("Unknown color\n"); break;
    }
}

int main()
{
    enum Color color;
    int choice;

    printf("Choose a color:\n");
    printf("0 - Red\n1 - Green\n2 - Blue\n3 - Yellow\n4 - White\n5 - Black\n");
    scanf("%d", &choice);

    if (choice >= 0 && choice <= 5)
    {
        color = (enum Color)choice;
        showColorCode(color);
    }
    else
    {
        printf("Invalid choice\n");
    }

    return 0;
}
