#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char text[1000];
    int freq[26] = {0};

    printf("Enter text: ");
    fgets(text, sizeof(text), stdin);

    // Count letters
    for (int i = 0; text[i] != '\0'; i++)
    {
        if (isalpha(text[i]))
        {
            char upper = toupper(text[i]);
            freq[upper - 'A']++;
        }
    }

    // Find max frequency
    int max = 0;
    int index = 0;

    for (int i = 0; i < 26; i++)
    {
        if (freq[i] > max)
        {
            max = freq[i];
            index = i;
        }
    }

    // Output result
    if (max > 0)
    {
        printf("Most frequent letter: %c\n", 'A' + index);
        printf("Occurrences: %d\n", max);
    }
    else
    {
        printf("No letters found.\n");
    }
}