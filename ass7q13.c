#include <stdio.h>

int main()
{
    int a[10][10], transpose[10][10];
    int n, i, j;
    int symmetric = 1, skew = 1;

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
        for(j = 0; j < n; j++)
        {
            transpose[i][j] = a[j][i];
        }
    }

    printf("Transpose:\n");

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%d\t", transpose[i][j]);
        }

        printf("\n");
    }

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(a[i][j] != transpose[i][j])
            {
                symmetric = 0;
            }

            if(a[i][j] != -transpose[i][j])
            {
                skew = 0;
            }
        }
    }

    if(symmetric)
    {
        printf("Matrix is symmetric.");
    }
    else if(skew)
    {
        printf("Matrix is skew-symmetric.");
    }
    else
    {
        printf("Matrix is neither symmetric nor skew-symmetric.");
    }

    return 0;
}