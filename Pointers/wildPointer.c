#include<stdio.h>

int main() {
    int* ptr;
    int num = 100;
    ptr = &num;
    printf("%d\n", *ptr);
}