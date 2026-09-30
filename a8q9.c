#include <stdio.h>
#include <string.h>

int main()
{
    char sentence[200];
    char word[100];
    char *position;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    printf("Enter word to search: ");
    fgets(word, sizeof(word), stdin);

    sentence[strcspn(sentence, "\n")] = '\0';
    word[strcspn(word, "\n")] = '\0';

    position = strstr(sentence, word);

    if (position != NULL)
    {
        printf("Word found at position %ld\n",
               (long)(position - sentence + 1));
    }
    else
    {
        printf("Word not found in the sentence.\n");
    }

    return 0;
}