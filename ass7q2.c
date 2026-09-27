#include <stdio.h>

int main()
{
    int a[100], n, i, key, count = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    printf("Element found at position(s): ");

    for(i = 0; i < n; i++)
    {
        if(a[i] == key)
        {
            printf("%d ", i + 1);
            count++;
        }
    }

    if(count == 0)
    {
        printf("\nElement not found.");
    }
    else
    {
        printf("\nTotal occurrences = %d", count);
    }

    return 0;
}