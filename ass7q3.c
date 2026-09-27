#include <stdio.h>

int main()
{
    int a[100], n, i, element, pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter new element: ");
    scanf("%d", &element);

    printf("Enter position: ");
    scanf("%d", &pos);

    if(pos < 1 || pos > n + 1)
    {
        printf("Invalid position.");
    }
    else
    {
        for(i = n; i >= pos; i--)
        {
            a[i] = a[i - 1];
        }

        a[pos - 1] = element;
        n++;

        printf("Updated array: ");

        for(i = 0; i < n; i++)
        {
            printf("%d ", a[i]);
        }
    }

    return 0;
}