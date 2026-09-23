#include <stdio.h>

int interpolationSearch(int array[],
                        int size,
                        int searchKey)
{
    int low = 0;
    int high = size - 1;

    while (low <= high &&
           searchKey >= array[low] &&
           searchKey <= array[high])
    {
        if (array[low] == array[high])
        {
            if (array[low] == searchKey)
                return low;

            return -1;
        }

        int position =
            low +
            ((searchKey - array[low]) *
             (high - low)) /
            (array[high] - array[low]);

        if (array[position] == searchKey)
            return position;

        if (array[position] < searchKey)
            low = position + 1;
        else
            high = position - 1;
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

    result = interpolationSearch(
        array, size, searchKey);

    if (result == -1)
        printf("Element not found.");
    else
        printf("Element found at position %d.",
               result + 1);

    return 0;
}
