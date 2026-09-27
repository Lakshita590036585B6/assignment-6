#include <stdio.h>

int main()
{
    int a[100], n, i, sum = 0;
    float avg;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }

    printf("Array elements are: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    avg = (float)sum / n;

    printf("\nSum = %d", sum);
    printf("\nAverage = %.2f", avg);

    return 0;
}