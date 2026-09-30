#include <stdio.h>

int gcdTwo(int a, int b)
{
    int temp;

    while (b != 0)
    {
        temp = b;
        b = a % b;
        a = temp;
    }

    return a;
}

int gcdThree(int a, int b, int c)
{
    return gcdTwo(gcdTwo(a, b), c);
}

int lcmTwo(int a, int b)
{
    return (a / gcdTwo(a, b)) * b;
}

int lcmThree(int a, int b, int c)
{
    return lcmTwo(lcmTwo(a, b), c);
}

int main()
{
    int a, b, c;

    printf("Enter three positive integers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a <= 0 || b <= 0 || c <= 0)
    {
        printf("Please enter positive integers only.\n");
    }
    else
    {
        printf("GCD = %d\n", gcdThree(a, b, c));
        printf("LCM = %d\n", lcmThree(a, b, c));
    }

    return 0;
}