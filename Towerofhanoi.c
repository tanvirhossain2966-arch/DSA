#include <stdio.h>

void towerOfHanoi(int diskCount,
                  char source,
                  char auxiliary,
                  char destination)
{
    if (diskCount == 1)
    {
        printf("Move disk 1 from %c to %c\n",
               source, destination);
        return;
    }

    towerOfHanoi(diskCount - 1,
                 source,
                 destination,
                 auxiliary);

    printf("Move disk %d from %c to %c\n",
           diskCount,
           source,
           destination);

    towerOfHanoi(diskCount - 1,
                 auxiliary,
                 source,
                 destination);
}

int main()
{
    int diskCount;

    scanf("%d", &diskCount);

    towerOfHanoi(diskCount,
                 'A', 'B', 'C');

    return 0;
}
