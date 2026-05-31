#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char text[1000];
    int key;

    printf("Enter text: ");
    fgets(text, sizeof(text), stdin);

    printf("Enter shift key: ");
    scanf("%d", &key);

    printf("Encrypted text: ");

    for (int i = 0; text[i] != '\0'; i++)
    {
        if (isupper(text[i]))
        {
            char c = ((text[i] - 'A' + key) % 26) + 'A';
            printf("%c", c);
        }
        else if (islower(text[i]))
        {
            char c = ((text[i] - 'a' + key) % 26) + 'a';
            printf("%c", c);
        }
        else
        {
            printf("%c", text[i]);
        }
    }

    printf("\n");
}