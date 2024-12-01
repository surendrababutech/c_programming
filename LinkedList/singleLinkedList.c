#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int main() {
    struct Node* first = (struct Node *)malloc(sizeof(struct Node));
    struct Node* second = (struct Node *)malloc(sizeof(struct Node));
    struct Node* third = (struct Node *)malloc(sizeof(struct Node));
    struct Node* fourth = (struct Node *)malloc(sizeof(struct Node));

    first->data = 10;
    second->data = 20;
    third->data = 30;
    fourth->data = 40;

    first->next = second;
    second->next = third;
    third->next = fourth;

    struct Node* temp = first;
    
    while(temp) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

}