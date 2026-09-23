#include <stdio.h>

#define MAX_SIZE 100

int queue[MAX_SIZE];
int front = -1;
int rear = -1;

void enqueue(int value)
{
    if (rear == MAX_SIZE - 1)
    {
        printf("Queue Overflow\n");
        return;
    }

    if (front == -1)
        front = 0;

    rear++;
    queue[rear] = value;
}

void dequeue()
{
    if (front == -1 || front > rear)
    {
        printf("Queue Underflow\n");
        return;
    }

    printf("Deleted element = %d\n",
           queue[front]);

    front++;
}

void displayQueue()
{
    int index;

    if (front == -1 || front > rear)
    {
        printf("Queue is empty\n");
        return;
    }

    for (index = front; index <= rear; index++)
        printf("%d ", queue[index]);

    printf("\n");
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);

    displayQueue();

    dequeue();

    displayQueue();

    return 0;
}
