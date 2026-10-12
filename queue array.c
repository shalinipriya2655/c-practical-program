#include <stdio.h>
#define SIZE 5

int queue[SIZE], front = -1, rear = -1;

void enqueue(int x)
{
    if(rear == SIZE - 1)
        printf("Queue is Full\n");
    else
    {
        if(front == -1)
            front = 0;
        queue[++rear] = x;
    }
}

void dequeue()
{
    if(front == -1 || front > rear)
        printf("Queue is Empty\n");
    else
        printf("Deleted: %d\n", queue[front++]);
}

void display()
{
    int i;
    if(front == -1 || front > rear)
        printf("Queue is Empty\n");
    else
    {
        printf("Queue elements: ");
        for(i = front; i <= rear; i++)
            printf("%d ", queue[i]);
        printf("\n");
    }
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);

    display();
    dequeue();
    display();

    return 0;
}
