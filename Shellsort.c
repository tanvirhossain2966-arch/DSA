#include <stdio.h>

void shellSort(int array[], int size)
{
    int gap, index, previousIndex, currentValue;

    for (gap = size / 2; gap > 0; gap /= 2)
    {
        for (index = gap; index < size; index++)
        {
            currentValue = array[index];
            previousIndex = index;

            while (previousIndex >= gap &&
                   array[previousIndex - gap] >
                   currentValue)
            {
                array[previousIndex] =
                    array[previousIndex - gap];

                previousIndex -= gap;
            }

            array[previousIndex] = currentValue;
        }
    }
}

int main()
{
    int array[100];
    int size, index;

    scanf("%d", &size);

    for (index = 0; index < size; index++)
        scanf("%d", &array[index]);

    shellSort(array, size);

    for (index = 0; index < size; index++)
        printf("%d ", array[index]);

    return 0;
}
