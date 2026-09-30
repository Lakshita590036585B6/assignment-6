#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];
    int result;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    printf("Length of first string = %zu\n", strlen(str1));
    printf("Length of second string = %zu\n", strlen(str2));

    result = strcmp(str1, str2);

    if (result == 0)
        printf("Both strings are equal.\n");
    else if (result < 0)
        printf("%s comes first lexicographically.\n", str1);
    else
        printf("%s comes first lexicographically.\n", str2);

    return 0;
}