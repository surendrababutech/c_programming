#include<stdio.h>
#include<stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

Node* head = NULL;

void insertNodeAtEnd(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    Node* temp = head;
    while(temp->next!=NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

void insertNodeAtBeginning(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = head;
    head = newNode;
}

void insertNodeAtMiddle(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    int length = 0;
    Node* temp = head;
    while(temp) {
        length++;
        temp = temp->next;
    }
    temp = head;
    for(int i=0; i<(length/2); i++) {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

void insertNodeAtPosition(int data,int pos) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    Node* temp = head;
    for(int i=0; i<pos-1; i++) {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

void printLinkedList() {
    Node* temp = head;
    while(temp) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL");
}

 
int main() {
    Node* first = (Node *)malloc(sizeof(Node));
    first->data = 10;
    Node* second = (Node*)malloc(sizeof(Node));
    second->data = 20;
    Node* third = (Node*)malloc(sizeof(Node));
    third->data = 30;
    
    first->next = second;
    second->next = third;
    
    struct Node* temp = first;
    
    head = first;
    
    insertNodeAtEnd(40);
    
    insertNodeAtBeginning(5);
    
    insertNodeAtMiddle(25);
    
    insertNodeAtPosition(12, 2);
    
    printLinkedList();

}