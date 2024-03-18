// Implement a Queue using Array and develop functions to perform enqueue and dequeue operations
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
struct Queue
{
    int *data;
    int maxCapacity;
    int front;
    int rear;
};

int noOfItems(struct Queue *queue)
{

    if (queue->rear == -1 && queue->front == -1)
    {
        return 0;
    }
    else if (queue->rear >= queue->front)
    {
        return (queue->rear - queue->front) + 1;
    }
    else
    {
        return (((queue->maxCapacity - 1) - queue->front) + 1) + (queue->rear + 1);
    }
}

int isFull(struct Queue *queue)
{
    if (noOfItems(queue) == queue->maxCapacity)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int enQueue(struct Queue *queue, int item)
{

    if (isFull(queue) == 0)
    {

        if (noOfItems(queue) == 0)
        {

            queue->front = 0;
        }
        queue->rear = (queue->rear + 1) % (queue->maxCapacity);
        queue->data[queue->rear] = item;
        printf("enQueue %d:\n", item);
        return 1;
    }
    else
    {
        printf("%d not enQueue\n", item);
        return 0;
    }
}

int deQueue(struct Queue *queue)
{

    if (noOfItems(queue) != 0)
    {
        int temp = queue->data[queue->front];

        if (queue->front == queue->rear)
        {

            queue->front = -1;
            queue->rear = -1;
        }
        else
        {
            queue->front = (queue->front + 1) % (queue->maxCapacity);
        }
        return temp;
    }
    else
    {
        return INT_MIN;
    }
}

void printQueueDetails(struct Queue *queue)
{
    printf("maxCapacity=%d , front=%d , rear=%d. \n", queue->maxCapacity, queue->front, queue->rear);
}

void printQueue(struct Queue *queue)
{
    int i;
    printf("queue: ");
    i = queue->front;
    if (noOfItems(queue) != 0)
    {

        do
        {
            printf("data[%d]= %d\t ", i, queue->data[i]);
            i = (i + 1) % (queue->maxCapacity);
        } while (i != (queue->rear + 1) % queue->maxCapacity);
        printf("\n");
    }
}

int main(int argc, char const *argv[])
{
    int value, choice;

    struct Queue queueA;
    queueA.maxCapacity = 10;
    queueA.front = -1;
    queueA.rear = -1;
    queueA.data = (int *)malloc(queueA.maxCapacity * sizeof(int));
    while (1)
    {
        printf("Enter the choice\n");
        printf("1.enQueue\n2.deQueue\n3.display\n4.check details\n5.exit\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the value to enQeue\n");
            scanf("%d", &value);
            enQueue(&queueA, value);
            break;

        case 2:
            value = deQueue(&queueA);
            if (value != INT_MIN)
            {
                printf("\n%d is removed\n", value);
            }
            else
            {
                printf("Queue was empty and could not remove any item!\n");
            }
            break;

        case 3:
            printQueue(&queueA);
            break;

        case 4:
            printQueueDetails(&queueA);
            break;

        case 5:
            exit(0);
            break;

        default:
            printf("Enter the correct number\n");
            break;
        }
    }
    return 0;
}