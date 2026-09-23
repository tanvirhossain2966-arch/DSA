#include <stdio.h>

void insertionSort(int array[], int size)
{
    int index, previousIndex, currentValue;

    for (index = 1; index < size; index++)
    {
        currentValue = array[index];
        previousIndex = index - 1;

        while (previousIndex >= 0 &&
               array[previousIndex] > currentValue)
        {
            array[previousIndex + 1] =
                array[previousIndex];

            previousIndex--;
        }

        array[previousIndex + 1] = currentValue;
    }
}

int main()
{
    int array[100];
    int size, index;

    scanf("%d", &size);

    for (index = 0; index < size; index++)
        scanf("%d", &array[index]);

    insertionSort(array, size);

    for (index = 0; index < size; index++)
        printf("%d ", array[index]);

    return 0;
}
