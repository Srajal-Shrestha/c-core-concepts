#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    // Expect 2 keys
    if (argc != 3)
    {
        printf("Usage: ./caesar key1 key2\n");
        return 1;
    }

    // Validate both keys
    for (int j = 1; j <= 2; j++)
    {
        for (int i = 0; i < strlen(argv[j]); i++)
        {
            if (!isdigit(argv[j][i]))
            {
                printf("Usage: ./caesar key1 key2\n");
                return 1;
            }
        }
    }

    int key1 = atoi(argv[1]) % 26;
    int key2 = atoi(argv[2]) % 26;

    char plain[1000];
    printf("Plaintext: ");
    fgets(plain, sizeof(plain), stdin);

    printf("Ciphertext: ");

    for (int i = 0; i < strlen(plain); i++)
    {
        if (isalpha(plain[i]))
        {
            char base = isupper(plain[i]) ? 'A' : 'a';

            // First encryption
            char temp = (plain[i] - base + key1) % 26 + base;

            // Second encryption
            char encrypted = (temp - base + key2) % 26 + base;

            printf("%c", encrypted);
        }
        else
        {
            printf("%c", plain[i]);
        }
    }

    printf("\n");
    return 0;
}