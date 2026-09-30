#include <stdio.h>

void calculate(int a, int b, int *sum, int *difference,
               int *product, float *quotient)
{
    *sum = a + b;
    *difference = a - b;
    *product = a * b;

    if (b != 0)
        *quotient = (float)a / b;
}

int main()
{
    int a, b;
    int sum, difference, product;
    float quotient;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    calculate(a, b, &sum, &difference, &product, &quotient);

    printf("Sum = %d\n", sum);
    printf("Difference = %d\n", difference);
    printf("Product = %d\n", product);

    if (b != 0)
        printf("Quotient = %.2f\n", quotient);
    else
        printf("Division by zero is not possible.\n");

    return 0;
}