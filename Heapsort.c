#include <stdio.h>

void heapify(int array[], int size, int rootIndex)
{
    int largestIndex = rootIndex;
    int leftChild = 2 * rootIndex + 1;
    int rightChild = 2 * rootIndex + 2;
    int temporary;

    if (leftChild < size &&
        array[leftChild] > array[largestIndex])
    {
        largestIndex = leftChild;
    }

    if (rightChild < size &&
        array[rightChild] > array[largestIndex])
    {
        largestIndex = rightChild;
    }

    if (largestIndex != rootIndex)
    {
        temporary = array[rootIndex];
        array[rootIndex] = array[largestIndex];
        array[largestIndex] = temporary;

        heapify(array, size, largestIndex);
    }
}

void heapSort(int array[], int size)
{
    int index, temporary;

    for (index = size / 2 - 1;
         index >= 0;
         index--)
    {
        heapify(array, size, index);
    }

    for (index = size - 1; index > 0; index--)
    {
        temporary = array[0];
        array[0] = array[index];
        array[index] = temporary;

        heapify(array, index, 0);
    }
}

int main()
{
    int array[100];
    int size, index;

    scanf("%d", &size);

    for (index = 0; index < size; index++)
        scanf("%d", &array[index]);

    heapSort(array, size);

    for (index = 0; index < size; index++)
        printf("%d ", array[index]);

    return 0;
}
