#include <stdio.h>

int isEven(int n)
{
    return n % 2 == 0;
}

int isPrime(int n)
{
    int i;

    if (n <= 1)
        return 0;

    for (i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return 0;
    }

    return 1;
}

int isPerfect(int n)
{
    int i, sum = 0;

    if (n <= 0)
        return 0;

    for (i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
            sum = sum + i;
    }

    return sum == n;
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("\nClassification Report:\n");

    if (isEven(n))
        printf("Even number\n");
    else
        printf("Odd number\n");

    if (n > 0)
        printf("Positive number\n");
    else if (n < 0)
        printf("Negative number\n");
    else
        printf("Zero\n");

    if (isPrime(n))
        printf("Prime number\n");
    else
        printf("Not a prime number\n");

    if (isPerfect(n))
        printf("Perfect number\n");
    else
        printf("Not a perfect number\n");

    return 0;
}