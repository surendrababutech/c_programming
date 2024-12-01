#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

Node* top = NULL;

Node* createNode(int data) {
    Node* newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    return newNode;
}

void printStack() {
    Node* temp = top;
    while(temp) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}


void push(int data) {
    Node* newNode = createNode(data);
    newNode->next = top;
    top = newNode;
}

void isEmpty() {
    if(top==NULL) {
        printf("Stack is Empty\n");
    }
    else {
        printf("Stack having elements : ");
        printStack();
    }
} 

void peek() {
    if(top==NULL) {
        printf("Stack is Empty\n");
    }
    else {
        printf("Peek Element is %d\n", top->data);
    }
}

void pop() {
    top = top->next;
}

int main() {
    push(10);
    push(20);
    pop();
    isEmpty();
    peek();
    push(40);
    printStack();
}