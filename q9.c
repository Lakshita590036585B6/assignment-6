#include <stdio.h>

int main()
{
    int choice, num, temp, remainder;
    int reverse, sum, count, i, flag;

    do
    {
        printf("\n----- MENU -----\n");
        printf("1. Check Palindrome\n");
        printf("2. Check Armstrong Number\n");
        printf("3. Check Prime Number\n");
        printf("4. Find Sum of Digits\n");
        printf("5. Count Number of Digits\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter a number: ");
                scanf("%d", &num);

                temp = num;
                reverse = 0;

                while (temp != 0)
                {
                    remainder = temp % 10;
                    reverse = reverse * 10 + remainder;
                    temp = temp / 10;
                }

                if (reverse == num)
                    printf("%d is a Palindrome.\n", num);
                else
                    printf("%d is not a Palindrome.\n", num);

                break;


            case 2:
                printf("Enter a number: ");
                scanf("%d", &num);

                temp = num;
                sum = 0;

                while (temp != 0)
                {
                    remainder = temp % 10;
                    sum = sum + remainder * remainder * remainder;
                    temp = temp / 10;
                }

                if (sum == num)
                    printf("%d is an Armstrong Number.\n", num);
                else
                    printf("%d is not an Armstrong Number.\n", num);

                break;


            case 3:
                printf("Enter a number: ");
                scanf("%d", &num);

                flag = 0;

                if (num <= 1)
                {
                    flag = 1;
                }
                else
                {
                    for (i = 2; i < num; i++)
                    {
                        if (num % i == 0)
                        {
                            flag = 1;
                            break;
                        }
                    }
                }

                if (flag == 0)
                    printf("%d is a Prime Number.\n", num);
                else
                    printf("%d is not a Prime Number.\n", num);

                break;


            case 4:
                printf("Enter a number: ");
                scanf("%d", &num);

                temp = num;
                sum = 0;

                while (temp != 0)
                {
                    remainder = temp % 10;
                    sum = sum + remainder;
                    temp = temp / 10;
                }

                printf("Sum of digits = %d\n", sum);

                break;


            case 5:
                printf("Enter a number: ");
                scanf("%d", &num);

                temp = num;
                count = 0;

                if (temp == 0)
                {
                    count = 1;
                }
                else
                {
                    while (temp != 0)
                    {
                        count++;
                        temp = temp / 10;
                    }
                }

                printf("Number of digits = %d\n", count);

                break;


            case 6:
                printf("Exiting program...\n");
                break;


            default:
                printf("Invalid choice! Please enter 1 to 6.\n");
        }

    } while (choice != 6);

    return 0;
}