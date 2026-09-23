#include <stdio.h>

int partition(int array[], int low, int high)
{
    int pivot = array[high];
    int smallerIndex = low - 1;
    int index, temporary;

    for (index = low; index < high; index++)
    {
        if (array[index] < pivot)
        {
            smallerIndex++;

            temporary = array[smallerIndex];
            array[smallerIndex] = array[index];
            array[index] = temporary;
        }
    }

    temporary = array[smallerIndex + 1];
    array[smallerIndex + 1] = array[high];
    array[high] = temporary;

    return smallerIndex + 1;
}

void quickSort(int array[], int low, int high)
{
    if (low < high)
    {
        int pivotIndex =
            partition(array, low, high);

        quickSort(array, low, pivotIndex - 1);
        quickSort(array, pivotIndex + 1, high);
    }
}

int main()
{
    int array[100];
    int size, index;

    scanf("%d", &size);

    for (index = 0; index < size; index++)
        scanf("%d", &array[index]);

    quickSort(array, 0, size - 1);

    for (index = 0; index < size; index++)
        printf("%d ", array[index]);

    return 0;
}
