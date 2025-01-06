#include<stdio.h>
#include<stdlib.h>

typedef struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
} Node;

Node* head = NULL;

void insertNodeAtBeginning(int data) {
    Node* newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void insertNodeAtEnd(int data) {
    Node* temp = head;
    while(temp->next != NULL) {
        temp = temp->next; 
    }
    Node* newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->prev = temp;
    temp->next = newNode;
}

void insertNodeAtMiddle(int data) {
    Node* temp = head;
    Node* curr = head;
    while(temp->next != NULL) {
        curr = curr->next;
        temp = temp->next->next;
    } 
    Node* newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = curr->next;
    newNode->prev = curr;
    curr->next = newNode;
    temp = newNode->next;
    temp->prev = newNode;
}

void printLinkedList() {
    Node* temp = head;
    while(temp) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

void printReverseLinkedList() {
    Node* temp = head;
    while(temp->next != NULL) {
        temp = temp->next;
    }
    while(temp) {
        printf("%d -> ", temp->data);
        temp = temp->prev;
    }
    printf("NULL\n");
}

int main() {
    Node* first = (Node *)malloc(sizeof(Node));
    Node* second = (Node *)malloc(sizeof(Node));
    Node* third = (Node *)malloc(sizeof(Node));
    Node* fourth = (Node *)malloc(sizeof(Node));
    Node* fifth = (Node *)malloc(sizeof(Node));

    first->data = 10;
    second->data = 20;
    third->data = 30;
    fourth->data = 40;
    fifth->data = 50;

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;

    fifth->prev = fourth;
    fourth->prev = third;
    third->prev = second;
    second->prev = first;

    head = first;

    insertNodeAtBeginning(5);

    insertNodeAtEnd(60);

    insertNodeAtMiddle(35);

    printLinkedList();

    printReverseLinkedList();

}
