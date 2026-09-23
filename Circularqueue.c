#include <stdio.h>

#define MAX_SIZE 5

int circularQueue[MAX_SIZE];
int front = -1;
int rear = -1;

void enqueue(int value)
{
    if ((rear + 1) % MAX_SIZE == front)
    {
        printf("Queue Overflow\n");
        return;
    }

    if (front == -1)
        front = 0;

    rear = (rear + 1) % MAX_SIZE;
    circularQueue[rear] = value;
}

void dequeue()
{
    if (front == -1)
    {
        printf("Queue Underflow\n");
        return;
    }

    printf("Deleted element = %d\n",
           circularQueue[front]);

    if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else
    {
        front = (front + 1) % MAX_SIZE;
    }
}

void displayQueue()
{
    int index;

    if (front == -1)
    {
        printf("Queue is empty\n");
        return;
    }

    index = front;

    while (1)
    {
        printf("%d ", circularQueue[index]);

        if (index == rear)
            break;

        index = (index + 1) % MAX_SIZE;
    }

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
