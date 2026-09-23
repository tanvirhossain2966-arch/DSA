#include <stdio.h>

void deleteElement(int array[], int *size, int position)
{
    int index;

    for (index = position - 1; index < *size - 1; index++)
        array[index] = array[index + 1];

    (*size)--;
}

void displayArray(int array[], int size)
{
    int index;

    for (index = 0; index < size; index++)
        printf("%d ", array[index]);
}

int main()
{
    int array[100];
    int size, position;
    int index;

    printf("Enter size: ");
    scanf("%d", &size);

    printf("Enter elements: ");
    for (index = 0; index < size; index++)
        scanf("%d", &array[index]);

    printf("Enter position to delete: ");
    scanf("%d", &position);

    deleteElement(array, &size, position);

    printf("Array after deletion: ");
    displayArray(array, size);

    return 0;
}
