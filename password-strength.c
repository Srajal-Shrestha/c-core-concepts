#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char password[100];

    printf("Enter the password: ");
    scanf("%s", password);

    int length = strlen(password);
    int has_upper = 0, has_lower = 0, has_digit = 0;

    for (int i = 0; i < length; i++)
    {
        if (isupper(password[i]))
        has_upper = 1;

        if (islower(password[i]))
        has_lower = 1;
        
        if (isdigit(password[i]))
        has_digit = 1;
    }
    if (length >= 8 && has_upper && has_lower && has_digit)
    {
        printf("Strong password\n");
    }
    else
    {
        printf("Weak password. missing:\n");

        if (length < 8)
        printf("- At least 8 characters \n");
        if (!has_upper)
        printf("- An uppercase letter\n");
        if (!has_lower)
        printf("- A lowercase letter\n");
        if (!has_digit)
        printf("- A digit\n");
    }
    return 0;
}