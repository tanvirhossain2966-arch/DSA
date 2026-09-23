#include <stdio.h>

void merge(int array[],
           int left,
           int middle,
           int right)
{
    int temporaryArray[100];
    int leftIndex = left;
    int rightIndex = middle + 1;
    int temporaryIndex = 0;

    while (leftIndex <= middle &&
           rightIndex <= right)
    {
        if (array[leftIndex] <= array[rightIndex])
            temporaryArray[temporaryIndex++] =
                array[leftIndex++];
        else
            temporaryArray[temporaryIndex++] =
                array[rightIndex++];
    }

    while (leftIndex <= middle)
        temporaryArray[temporaryIndex++] =
            array[leftIndex++];

    while (rightIndex <= right)
        temporaryArray[temporaryIndex++] =
            array[rightIndex++];

    for (temporaryIndex = 0;
         left <= right;
         left++, temporaryIndex++)
    {
        array[left] = temporaryArray[temporaryIndex];
    }
}

void mergeSort(int array[], int left, int right)
{
    if (left < right)
    {
        int middle = (left + right) / 2;

        mergeSort(array, left, middle);
        mergeSort(array, middle + 1, right);

        merge(array, left, middle, right);
    }
}

int main()
{
    int array[100];
    int size, index;

    scanf("%d", &size);

    for (index = 0; index < size; index++)
        scanf("%d", &array[index]);

    mergeSort(array, 0, size - 1);

    for (index = 0; index < size; index++)
        printf("%d ", array[index]);

    return 0;
}
