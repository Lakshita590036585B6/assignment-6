#include <stdio.h>

int calculateTotal(int a, int b, int c, int d, int e)
{
    return a + b + c + d + e;
}

float calculatePercentage(int total)
{
    return total / 5.0;
}

int checkPass(int a, int b, int c, int d, int e)
{
    if (a < 40 || b < 40 || c < 40 || d < 40 || e < 40)
        return 0;

    return 1;
}

char calculateGrade(float percentage)
{
    if (percentage >= 90)
        return 'A';
    else if (percentage >= 80)
        return 'B';
    else if (percentage >= 70)
        return 'C';
    else if (percentage >= 60)
        return 'D';
    else
        return 'F';
}

int main()
{
    int m1, m2, m3, m4, m5;
    int total;
    float percentage;

    printf("Enter marks of five subjects: ");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);

    total = calculateTotal(m1, m2, m3, m4, m5);
    percentage = calculatePercentage(total);

    printf("Total = %d\n", total);
    printf("Percentage = %.2f%%\n", percentage);

    if (checkPass(m1, m2, m3, m4, m5))
    {
        printf("Result = Pass\n");
        printf("Grade = %c\n", calculateGrade(percentage));
    }
    else
    {
        printf("Result = Fail\n");
        printf("Grade = F\n");
    }

    return 0;
}