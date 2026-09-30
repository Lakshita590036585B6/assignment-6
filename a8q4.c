#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[100];
    int length = 0;
    int i, flag = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[length] != '\0' && str[length] != '\n')
    {
        length++;
    }

    for (i = 0; i < length / 2; i++)
    {
        if (tolower((unsigned char)str[i]) !=
            tolower((unsigned char)str[length - i - 1]))
        {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;
}