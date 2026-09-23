#include <stdio.h>

#define MAX_SIZE 100

int deque[MAX_SIZE];
int front = -1;
int rear = -1;

void insertFront(int value)
{
    if (front == 0)
    {
        printf("Cannot insert at front\n");
        return;
    }

    if (front == -1)
    {
        front = 0;
        rear = 0;
    }
    else
    {
        front--;
    }

    deque[front] = value;
}

void insertRear(int value)
{
    if (rear == MAX_SIZE - 1)
    {
        printf("Deque Overflow\n");
        return;
    }

    if (front == -1)
    {
        front = 0;
        rear = 0;
    }
    else
    {
        rear++;
    }

    deque[rear] = value;
}

void deleteFront()
{
    if (front == -1)
    {
        printf("Deque Underflow\n");
        return;
    }

    printf("Deleted = %d\n",
           deque[front]);

    if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else
    {
        front++;
    }
}

void deleteRear()
{
    if (rear == -1)
    {
        printf("Deque Underflow\n");
        return;
    }

    printf("Deleted = %d\n",
           deque[rear]);

    if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else
    {
        rear--;
    }
}

int main()
{
    insertRear(10);
    insertRear(20);
    insertFront(5);

    deleteFront();
    deleteRear();

    return 0;
}
