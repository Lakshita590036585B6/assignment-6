#include <stdio.h>

int main()
{
    int a[10][10];
    int n, i, j;
    int mainSum = 0, secondarySum = 0;
    int upper = 1, lower = 1;

    printf("Enter order of square matrix: ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < n; i++)
    {
        mainSum += a[i][i];
        secondarySum += a[i][n - 1 - i];
    }

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(i > j && a[i][j] != 0)
            {
                upper = 0;
            }

            if(i < j && a[i][j] != 0)
            {
                lower = 0;
            }
        }
    }

    printf("Main diagonal sum = %d\n", mainSum);
    printf("Secondary diagonal sum = %d\n", secondarySum);

    if(upper && lower)
    {
        printf("Matrix is diagonal.");
    }
    else if(upper)
    {
        printf("Matrix is upper triangular.");
    }
    else if(lower)
    {
        printf("Matrix is lower triangular.");
    }
    else
    {
        printf("Matrix is none of these.");
    }

    return 0;
}