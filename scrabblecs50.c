#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    char player1[100];
    char player2[100];

    printf("Player 1: ");
    scanf("%s", player1);

    printf("Player 2: ");
    scanf("%s", player2);

    int points[26] = {
        1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3,
        1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10
    };

    int score1 = 0, score2 = 0;

    for (int i = 0; i < strlen(player1); i++)
    {
        if (isalpha(player1[i]))
        {
            score1 += points[toupper(player1[i]) - 'A'];
        }
    }

    for (int i = 0; i < strlen(player2); i++)
    {
        if (isalpha(player2[i]))
        {
            score2 += points[toupper(player2[i]) - 'A'];
        }
    }

    if (score1 > score2)
        printf("Player 1 wins!\n");
    else if (score2 > score1)
        printf("Player 2 wins!\n");
    else
        printf("Tie!\n");

    return 0;
}