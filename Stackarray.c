#include <stdio.h>

#define MAX_SIZE 100

int stack[MAX_SIZE];
int top = -1;

void push(int value)
{
    if (top == MAX_SIZE - 1)
    {
        printf("Stack Overflow\n");
        return;
    }

    top++;
    stack[top] = value;
}

void pop()
{
    if (top == -1)
    {
        printf("Stack Underflow\n");
        return;
    }

    printf("Deleted element = %d\n",
           stack[top]);

    top--;
}

void displayStack()
{
    int index;

    if (top == -1)
    {
        printf("Stack is empty\n");
        return;
    }

    for (index = top; index >= 0; index--)
        printf("%d ", stack[index]);

    printf("\n");
}

int main()
{
    push(10);
    push(20);
    push(30);

    displayStack();

    pop();

    displayStack();

    return 0;
}
