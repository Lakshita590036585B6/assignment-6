#include <stdio.h>

void display(int arr[], int size)
{
    int i;

    if (size == 0)
    {
        printf("Array is empty.\n");
        return;
    }

    printf("Array elements: ");

    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);

    printf("\n");
}

void insertElement(int arr[], int *size, int element, int position)
{
    int i;

    if (*size >= 100)
    {
        printf("Array is full.\n");
        return;
    }

    if (position < 1 || position > *size + 1)
    {
        printf("Invalid position.\n");
        return;
    }

    for (i = *size; i >= position; i--)
        arr[i] = arr[i - 1];

    arr[position - 1] = element;
    (*size)++;

    printf("Element inserted successfully.\n");
}

int deleteElement(int arr[], int *size, int position)
{
    int i;
    int deleted;

    if (*size == 0)
    {
        printf("Array is empty.\n");
        return 0;
    }

    if (position < 1 || position > *size)
    {
        printf("Invalid position.\n");
        return 0;
    }

    deleted = arr[position - 1];

    for (i = position - 1; i < *size - 1; i++)
        arr[i] = arr[i + 1];

    (*size)--;

    return deleted;
}

int main()
{
    int arr[100];
    int size, i;
    int choice, element, position, deleted;

    printf("Enter number of elements: ");
    scanf("%d", &size);

    printf("Enter %d elements: ", size);

    for (i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    do
    {
        printf("\n1. Display Array\n");
        printf("2. Insert Element\n");
        printf("3. Delete Element\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                display(arr, size);
                break;

            case 2:
                printf("Enter element: ");
                scanf("%d", &element);

                printf("Enter position: ");
                scanf("%d", &position);

                insertElement(arr, &size, element, position);
                break;

            case 3:
                printf("Enter position to delete: ");
                scanf("%d", &position);

                if (position >= 1 && position <= size)
                {
                    deleted = deleteElement(arr, &size, position);
                    printf("Deleted element = %d\n", deleted);
                }
                else
                {
                    printf("Invalid position.\n");
                }
                break;

            case 4:
                printf("Exiting program.\n");
                break;

            default:
                printf("Invalid choice.\n");
        }

    } while (choice != 4);

    return 0;
}