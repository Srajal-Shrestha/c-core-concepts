#include <stdio.h>
#include <string.h>
#include <ctype.h>

char shift_vowel(char c);

int main(void)
{
    char text[100];
    printf("Enter text: ");
    fgets(text, sizeof(text), stdin);

    // Remove newline character if present
    text[strcspn(text, "\n")] = '\0';


    for (int i = 0; i < strlen(text); i++)
    {
        text[i] = shift_vowel(text[i]);
    }

    printf("Output: %s\n", text);
}

char shift_vowel(char c)
{
    char lower = tolower(c);

    if (lower == 'a') return isupper(c) ? 'E' : 'e';
    if (lower == 'e') return isupper(c) ? 'I' : 'i';
    if (lower == 'i') return isupper(c) ? 'O' : 'o';
    if (lower == 'o') return isupper(c) ? 'U' : 'u';
    if (lower == 'u') return isupper(c) ? 'A' : 'a';

    return c;
}