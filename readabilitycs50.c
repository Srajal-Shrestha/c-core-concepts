#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    char text[1000];

    // Prompt user for input
    printf("Text: ");
    fgets(text, sizeof(text), stdin);

    int l = 0, s = 0, w = 1;

    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if (text[i] == ' ')
        {
            w++;
        }
        else if (text[i] == '.' || text[i] == '?' || text[i] == '!')
        {
            s++;
        }
        else if (isalpha(text[i]))
        {
            l++;
        }
    }

    // Coleman-Liau index formula
    int index = (int) round(0.0588 * l / w * 100 - 0.296 * s / w * 100 - 15.8);

    // Output result
    if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %d\n", index);
    }

    return 0;
}