#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    char ch;
    char *position;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    printf("Enter character to search: ");
    scanf("%c", &ch);

    position = strchr(str, ch);

    if (position != NULL)
    {
        printf("Character found at position %ld\n",
               (long)(position - str + 1));
    }
    else
    {
        printf("Character not found.\n");
    }

    return 0;
}