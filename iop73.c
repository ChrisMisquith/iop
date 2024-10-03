#include <stdio.h>

int main()
{
    int votes[5] = {0}, n, vote, spoilt = 0;

    printf("Enter the number of ballots: ");
    scanf("%d", &n);

    printf("Enter votes (1-5 for candidates, other for spoilt):\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &vote);
        if (vote >= 1 && vote <= 5)
            votes[vote - 1]++;
        else
            spoilt++;
    }

    printf("\nVote counts:\n");
    for (int i = 0; i < 5; i++)
        printf("Candidate %d: %d votes\n", i + 1, votes[i]);

    printf("Spoilt ballots: %d\n", spoilt);

    return 0;
}
