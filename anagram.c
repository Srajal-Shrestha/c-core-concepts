#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    char word1[100], word2[100];
    int freq1[26] = {0};
    int freq2[26] = {0};

    printf("Enter first word: ");
    scanf("%s", word1);

    printf("Enter second word: ");
    scanf("%s", word2);

    // Count letters of first word
    for (int i = 0; i < strlen(word1); i++)
    {
        if (isalpha(word1[i]))
        {
            char c = toupper(word1[i]);
            freq1[c - 'A']++;
        }
    }

    // Count letters of second word
    for (int i = 0; i < strlen(word2); i++)
    {
        if (isalpha(word2[i]))
        {
            char c = toupper(word2[i]);
            freq2[c - 'A']++;
        }
    }

    // Compare frequency arrays
    int isAnagram = 1;

    for (int i = 0; i < 26; i++)
    {
        if (freq1[i] != freq2[i])
        {
            isAnagram = 0;
            break;
        }
    }

    // Output result
    if (isAnagram)
    {
        printf("The words are anagrams.\n");
    }
    else
    {
        printf("The words are NOT anagrams.\n");
    }
}