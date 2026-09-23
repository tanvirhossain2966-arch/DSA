#include <stdio.h>

int linearSearch(int array[], int size, int searchKey)
{
    int index;

    for (index = 0; index < size; index++)
    {
        if (array[index] == searchKey)
            return index;
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

    result = linearSearch(array, size, searchKey);

    if (result == -1)
        printf("Element not found.");
    else
        printf("Element found at position %d.", result + 1);

    return 0;
}
