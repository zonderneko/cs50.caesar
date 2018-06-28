#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int key = 0, chk = 0;
    char input[100];
    char buffer;
    do //check key is > 0 and integer
    {
        printf("Enter key:\n");
        chk = scanf("%i", &key);
        fflush(stdin);
        if (chk != 1 || key < 0)
            printf("Retry\n");
    }
    while (chk != 1 || key < 0);
    printf("Enter string:\n");
    gets(input); //input string
    printf("Cyphered string: ");
    for (int i = 0; i < strlen(input); i++)
    {
        if (isalpha(input[i]))
        {
            if (islower(input[i]))
                printf("%c", (input[i] - 97 + key) % 26 + 97);
            else
                printf("%c", (input[i] - 65 + key) % 26 + 65);
        }
        else
            printf("%c", input[i]);
    }
}

