#include <stdio.h>

int main()
{
    int x, n, i, j;
    double sum = 0, power, factorial;

    printf("Enter x: ");
    scanf("%d", &x);

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        power = 1;
        factorial = 1;

        // Calculate x^i
        for (j = 1; j <= i; j++)
        {
            power = power * x;
        }

        // Calculate i!
        for (j = 1; j <= i; j++)
        {
            factorial = factorial * j;
        }

        // Add or subtract the term
        if (i % 2 == 1)
        {
            sum = sum + power / factorial;
        }
        else
        {
            sum = sum - power / factorial;
        }
    }

    printf("Sum of series = %.2f\n", sum);

    return 0;
}