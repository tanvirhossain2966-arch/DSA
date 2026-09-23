#include <stdio.h>

int binarySearchRecursive(int array[],
                          int left,
                          int right,
                          int searchKey)
{
    if (left > right)
        return -1;

    int middle = (left + right) / 2;

    if (array[middle] == searchKey)
        return middle;

    if (searchKey < array[middle])
        return binarySearchRecursive(
            array, left, middle - 1, searchKey);

    return binarySearchRecursive(
        array, middle + 1, right, searchKey);
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

    result = binarySearchRecursive(
        array, 0, size - 1, searchKey);

    if (result == -1)
        printf("Element not found.");
    else
        printf("Element found at position %d.",
               result + 1);

    return 0;
}
