#include <stdio.h>

int main()
{
    int n, i, j, space;
    int value;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        // Print spaces
        for (space = 0; space < n - i - 1; space++)
        {
            printf(" ");
        }

        value = 1;

        // Print numbers
        for (j = 0; j <= i; j++)
        {
            printf("%d ", value);

            value = value * (i - j) / (j + 1);
        }

        printf("\n");
    }

    return 0;
}