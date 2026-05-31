#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    char text[1000];

    printf("Enter text: ");
    fgets(text, sizeof(text), stdin);

    int words = 0;
    int sentences = 0;
    int letters = 0;

    for (int i = 0; i < strlen(text); i++)
    {
        if (isalpha(text[i]))
        {
            letters++;
        }
        if (text[i] == ' ')
        {
            words++;
        }
        if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            sentences++;
        }
    }

    words++; // last word

    float avg_word_length = (float) letters / words;

    printf("Words: %d\n", words);
    printf("Sentences: %d\n", sentences);
    printf("Average word length: %.2f\n", avg_word_length);
}