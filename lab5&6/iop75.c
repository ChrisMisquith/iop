#include <stdio.h>

int main()
{
    int roll[10], marks[10][3], total[10] = {0};
    int highMarks[3] = {0}, highRoll[3] = {0}, maxTotal = 0, maxRoll = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Enter Roll No. for student %d: ", i + 1);
        scanf("%d", &roll[i]);
        printf("Enter marks for 3 subjects: ");
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &marks[i][j]);
            total[i] += marks[i][j];
            if (marks[i][j] > highMarks[j])
            {
                highMarks[j] = marks[i][j];
                highRoll[j] = roll[i];
            }
        }
        if (total[i] > maxTotal)
        {
            maxTotal = total[i];
            maxRoll = roll[i];
        }
    }

    printf("\nTotal marks for each student:\n");
    for (int i = 0; i < 10; i++)
        printf("Roll No. %d: %d\n", roll[i], total[i]);

    printf("\nHighest marks in each subject:\n");
    for (int j = 0; j < 3; j++)
        printf("Subject %d: %d (Roll No. %d)\n", j + 1, highMarks[j], highRoll[j]);

    printf("\nStudent with highest total marks: Roll No. %d with %d marks.\n", maxRoll, maxTotal);

    return 0;
}
