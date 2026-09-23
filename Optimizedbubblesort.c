#include <stdio.h>

void optimizedBubbleSort(int array[], int size)
{
    int pass, index, temporary;
    int swapped;

    for (pass = 0; pass < size - 1; pass++)
    {
        swapped = 0;

        for (index = 0;
             index < size - pass - 1;
             index++)
        {
            if (array[index] > array[index + 1])
            {
                temporary = array[index];
                array[index] = array[index + 1];
                array[index + 1] = temporary;

                swapped = 1;
            }
        }

        if (swapped == 0)
            break;
    }
}

int main()
{
    int array[100];
    int size, index;

    scanf("%d", &size);

    for (index = 0; index < size; index++)
        scanf("%d", &array[index]);

    optimizedBubbleSort(array, size);

    for (index = 0; index < size; index++)
        printf("%d ", array[index]);

    return 0;
}
