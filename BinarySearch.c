#include <stdio.h>

int binarySearch(int array[], int size, int searchKey)
{
    int left = 0;
    int right = size - 1;

    while (left <= right)
    {
        int middle = (left + right) / 2;

        if (array[middle] == searchKey)
            return middle;

        if (searchKey < array[middle])
            right = middle - 1;
        else
            left = middle + 1;
    }

    return -1;
}

int main()
{
    int array[100];
    int size, searchKey, result;
    int index;

    scanf("%d", &size);

    for (index = 0; index < size; index++)
        scanf("%d", &array[index]);

    scanf("%d", &searchKey);

    result = binarySearch(array, size, searchKey);

    if (result == -1)
        printf("Element not found.");
    else
        printf("Element found at position %d.",
               result + 1);

    return 0;
}
