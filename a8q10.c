#include <stdio.h>
#include <string.h>

int main()
{
    char sentence[200];
    char *word;
    int count = 0;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    sentence[strcspn(sentence, "\n")] = '\0';

    word = strtok(sentence, " ");

    printf("Words are:\n");

    while (word != NULL)
    {
        printf("%s\n", word);
        count++;

        word = strtok(NULL, " ");
    }

    printf("Total number of words = %d\n", count);

    return 0;
}