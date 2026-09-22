#include <stdio.h>

int main() {
    int lower, upper, i, j, count = 0, isPrime;

    printf("Enter lower limit: ");
    scanf("%d", &lower);

    printf("Enter upper limit: ");
    scanf("%d", &upper);

    printf("Prime numbers are: ");

    for (i = lower; i <= upper; i++) {
        if (i < 2)
            continue;

        isPrime = 1;

        for (j = 2; j < i; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime == 1) {
            printf("%d ", i);
            count++;
        }
    }

    printf("\nTotal number of prime numbers = %d\n", count);

    return 0;
}
