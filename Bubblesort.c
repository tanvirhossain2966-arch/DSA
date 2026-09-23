#include <stdio.h>

void bubbleSort(int array[], int size)
{
    int pass, index, temporary;

    for (pass = 0; pass < size - 1; pass++)
    {
        for (index = 0;
             index < size - pass - 1;
             index++)
        {
            if (array[index] > array[index + 1])
            {
                temporary = array[index];
                array[index] = array[index + 1];
                array[index + 1] = temporary;
            }
        }
    }
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
    int size, index;

    scanf("%d", &size);

    for (index = 0; index < size; index++)
        scanf("%d", &array[index]);

    bubbleSort(array, size);

    displayArray(array, size);

    return 0;
}
