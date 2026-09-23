#include <stdio.h>

int findMaximum(int array[], int size)
{
    int maximum = array[0];
    int index;

    for (index = 1; index < size; index++)
    {
        if (array[index] > maximum)
            maximum = array[index];
    }

    return maximum;
}

void countingSort(int array[], int size, int place)
{
    int output[100];
    int count[10] = {0};
    int index;

    for (index = 0; index < size; index++)
        count[(array[index] / place) % 10]++;

    for (index = 1; index < 10; index++)
        count[index] += count[index - 1];

    for (index = size - 1; index >= 0; index--)
    {
        int digit = (array[index] / place) % 10;

        output[count[digit] - 1] = array[index];
        count[digit]--;
    }

    for (index = 0; index < size; index++)
        array[index] = output[index];
}

void radixSort(int array[], int size)
{
    int maximum = findMaximum(array, size);
    int place;

    for (place = 1;
         maximum / place > 0;
         place *= 10)
    {
        countingSort(array, size, place);
    }
}

int main()
{
    int array[100];
    int size, index;

    scanf("%d", &size);

    for (index = 0; index < size; index++)
        scanf("%d", &array[index]);

    radixSort(array, size);

    for (index = 0; index < size; index++)
        printf("%d ", array[index]);

    return 0;
}
