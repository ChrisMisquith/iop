#include <stdio.h>

int main() {
    // Array of hat sizes and corresponding head circumferences
    float hat_sizes[] = {6.5, 6.625, 6.75, 6.875, 7.0, 7.125, 7.25, 7.375, 7.5, 7.625, 7.75, 7.875};
    float circumferences[] = {20.5, 20.75, 21.0, 21.25, 21.5, 21.75, 22.0, 22.25, 22.5, 22.75, 23.0, 23.25};
    int num_sizes = 12;  // Total number of sizes

    float head_circumference;

    // Input: Get the head circumference from the user
    printf("Enter your head circumference (in inches): ");
    scanf("%f", &head_circumference);

    // Find the hat size
    for (int i = 0; i < num_sizes; i++) {
        if (head_circumference <= circumferences[i]) {
            printf("Your hat size is: %.3f\n", hat_sizes[i]);
            return 0; // Exit after finding the correct size
        }
    }

    // If the circumference is too large
    printf("Circumference too large for standard hat sizes.\n");

    return 0;
}
