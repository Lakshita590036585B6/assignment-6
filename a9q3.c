#include <stdio.h>

int sumDigits(int n)
{
    int sum = 0;

    if (n < 0)
        n = -n;

    while (n != 0)
    {
        sum = sum + n % 10;
        n = n / 10;
    }

    return sum;
}

int countDigits(int n)
{
    int count = 0;

    if (n == 0)
        return 1;

    if (n < 0)
        n = -n;

    while (n != 0)
    {
        count++;
        n = n / 10;
    }

    return count;
}

int reverseNumber(int n)
{
    int reverse = 0;

    if (n < 0)
        n = -n;

    while (n != 0)
    {
        reverse = reverse * 10 + n % 10;
        n = n / 10;
    }

    return reverse;
}

int isPalindrome(int n)
{
    if (n < 0)
        return 0;

    return n == reverseNumber(n);
}

int main()
{
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    printf("Sum of digits = %d\n", sumDigits(n));
    printf("Number of digits = %d\n", countDigits(n));
    printf("Reverse = %d\n", reverseNumber(n));

    if (isPalindrome(n))
        printf("Palindrome number\n");
    else
        printf("Not a palindrome number\n");

    return 0;
}