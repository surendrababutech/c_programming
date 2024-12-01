#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
}

Node* start = NULL;
Node* end = NULL;

void enqueue(int data) {
    Node* newNode = createNode(data);
    if(start==NULL) {
        start = end = newNode;
    }
    else {
        end->next = newNode;
        end = newNode;
    }
    printf("Element inserted successfully\n");
}

void dequeue() {
    if(start==NULL) {
        printf("Queue is Empty\n");
    }
    else {
        start = start->next;
        printf("Element deleted sussessfully\n");
    }
}

void printQueue() {
    Node* temp = start;
    if(temp==NULL) {
        printf("Stack is Empty\n");
    }
    else {
        printf("Stack elements are : ");
        while(temp) {
        printf("%d ", temp->data);
        temp = temp->next;
        }
    }
    
}

int main() {
    enqueue(10);
    enqueue(20);
    dequeue();
    printQueue();
}