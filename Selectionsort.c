#include <stdio.h>

void selectionSort(int array[], int size)
{
    int currentIndex, minimumIndex;
    int index, temporary;

    for (currentIndex = 0;
         currentIndex < size - 1;
         currentIndex++)
    {
        minimumIndex = currentIndex;

        for (index = currentIndex + 1;
             index < size;
             index++)
        {
            if (array[index] < array[minimumIndex])
                minimumIndex = index;
        }

        temporary = array[currentIndex];
        array[currentIndex] = array[minimumIndex];
        array[minimumIndex] = temporary;
    }
}

int main()
{
    int array[100];
    int size, index;

    scanf("%d", &size);

    for (index = 0; index < size; index++)
        scanf("%d", &array[index]);

    selectionSort(array, size);

    for (index = 0; index < size; index++)
        printf("%d ", array[index]);

    return 0;
}
