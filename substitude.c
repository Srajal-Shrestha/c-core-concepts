#include <stdio.h>
#include <ctype.h>
#include <string.h>

// Function to check if key is valid
int is_valid_key(char key[]);

int main(int argc, char *argv[])
{
    // Check for command-line argument
    if (argc != 2)
    {
        printf("Usage: ./substitution KEY\n");
        return 1;
    }

    char *key = argv[1];

    // Validate key
    if (!is_valid_key(key))
    {
        printf("Key must contain 26 unique alphabetic characters.\n");
        return 1;
    }

    char text[1000];

    printf("plaintext: ");
    fgets(text, sizeof(text), stdin);

    printf("ciphertext: ");

    // Encrypt text
    for (int i = 0; text[i] != '\0'; i++)
    {
        if (isupper(text[i]))
        {
            int index = text[i] - 'A';
            printf("%c", toupper(key[index]));
        }
        else if (islower(text[i]))
        {
            int index = text[i] - 'a';
            printf("%c", tolower(key[index]));
        }
        else
        {
            printf("%c", text[i]);
        }
    }

    printf("\n");
    return 0;
}

// Function to validate key
int is_valid_key(char key[])
{
    if (strlen(key) != 26)
    {
        return 0;
    }

    int seen[26] = {0};

    for (int i = 0; i < 26; i++)
    {
        if (!isalpha(key[i]))
        {
            return 0;
        }

        int index = toupper(key[i]) - 'A';

        if (seen[index])
        {
            return 0; // duplicate
        }

        seen[index] = 1;
    }

    return 1;
}