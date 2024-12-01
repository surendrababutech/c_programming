#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int top = -1;
#define n 5
int stack[n];

bool push(int data) {
    if (top >= n - 1) {  
        return false;
    }
    top++;
    stack[top] = data;
    return true;
}

bool pop() {
    if (top == -1) {  
        return false;
    }
    top--;
    return true;
}

bool isEmpty() {
    return (top == -1);
}

bool isFull() {
    return (top == n - 1);
}

void printStack() {
    if (isEmpty()) {
        printf("Stack is empty.\n");
        return;
    }
    printf("Stack elements: ");
    for (int i = top; i >= 0; i--) {
        printf("%d ", stack[i]);
    }
    printf("\n");
}

int main() {
    int input;
    while (true) {
        printf("\n1. Push an Element\n");
        printf("2. Pop an Element\n");
        printf("3. Check if Stack is Full\n");
        printf("4. Check if Stack is Empty\n");
        printf("5. Print the Stack\n");
        printf("6. Exit\n");
        printf("Enter an option: ");
        
        scanf("%d", &input);
        switch (input) {
            case 1: {
                int value;
                printf("Enter a value: ");
                scanf("%d", &value);
                if (push(value)) {
                    printf("%d is added to the stack successfully\n", value);
                } else {
                    printf("Stack is full\n");
                }
                break;
            }
            case 2:
                if (pop()) {
                    printf("Element popped successfully\n");
                } else {
                    printf("Stack is empty\n");
                }
                break;
            case 3:
                printf(isFull() ? "true\n" : "false\n");
                break;
            case 4:
                printf(isEmpty() ? "true\n" : "false\n");
                break;
            case 5:
                printStack();
                break;
            case 6:
                exit(0);
            default:
                printf("Invalid option. Please try again.\n");
        }
    }
    return 0;
}
