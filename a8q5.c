#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[100];
    int frequency[256] = {0};
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != '\n')
        {
            unsigned char ch = (unsigned char)tolower((unsigned char)str[i]);
            frequency[ch]++;
        }
    }

    printf("Character frequencies:\n");

    for (i = 0; i < 256; i++)
    {
        if (frequency[i] > 0)
        {
            printf("%c = %d\n", i, frequency[i]);
        }
    }

    return 0;
}