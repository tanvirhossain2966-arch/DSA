#include <stdio.h>

int fibonacci(int position)
{
    if (position == 0)
        return 0;

    if (position == 1)
        return 1;

    return fibonacci(position - 1) +
           fibonacci(position - 2);
}

int main()
{
    int numberOfTerms;
    int position;

    scanf("%d", &numberOfTerms);

    for (position = 0;
         position < numberOfTerms;
         position++)
    {
        printf("%d ", fibonacci(position));
    }

    return 0;
}
