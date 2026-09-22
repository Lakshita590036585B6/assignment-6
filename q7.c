#include <stdio.h>

int main()
{
    int num, remainder;
    long long binary = 0, place = 1;

    printf("Enter a positive decimal integer: ");
    scanf("%d", &num);

    while (num > 0)
    {
        remainder = num % 2;
        binary = binary + remainder * place;
        place = place * 10;
        num = num / 2;
    }

    printf("Binary number = %lld\n", binary);

    return 0;
}