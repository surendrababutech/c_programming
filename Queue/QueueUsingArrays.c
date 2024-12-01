#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define n 5
int queue[n];
int front = -1;
int rear = -1;

bool isFull() {
    return (rear == n - 1);
}

bool isEmpty() {
    return (front == -1 || front > rear);
}

void peek() {
    if (isEmpty()) {
        printf("Queue is empty\n");
    } else {
        printf("Peek element is %d\n", queue[front]);
    }
}

void enqueue(int data) {
    if (isFull()) {
        printf("Queue is full\n");
        return;
    }
    if (isEmpty()) {
        front = 0;
    }
    rear++;
    queue[rear] = data;
    printf("Element enqueued successfully!\n");
}

void dequeue() {
    if (isEmpty()) {
        printf("Queue is empty\n");
    } else {
        printf("Element dequeued: %d\n", queue[front]);
        front++;
        if (front > rear) { 
            front = -1;
            rear = -1;
        }
    }
}

void printQueue() {
    if (isEmpty()) {
        printf("Queue is empty\n");
        return;
    }
    printf("Queue elements: ");
    for (int i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

int main() {
    while (true) {
        int option;
        printf("\nQueue Operations:\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Check if Queue is Full\n");
        printf("4. Check if Queue is Empty\n");
        printf("5. Print Peek Element\n");
        printf("6. Print the Queue\n");
        printf("7. Exit\n");
        printf("Enter an option: ");
        scanf("%d", &option);

        switch (option) {
            case 1: {
                int value;
                printf("Enter a value to enqueue: ");
                scanf("%d", &value);
                enqueue(value);
                break;
            }
            case 2:
                dequeue();
                break;
            case 3:
                printf(isFull() ? "Queue is full\n" : "Queue is not full\n");
                break;
            case 4:
                printf(isEmpty() ? "Queue is empty\n" : "Queue is not empty\n");
                break;
            case 5:
                peek();
                break;
            case 6:
                printQueue();
                break;
            case 7:
                printf("Exiting program.\n");
                exit(0);
            default:
                printf("Invalid option! Try again.\n");
        }
    }
    return 0;
}
