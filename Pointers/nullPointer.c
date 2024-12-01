#include<stdio.h>

//A null pointer is used to indicate that a pointer does not currently point to any object or valid memory.
int main() {
    
    int* ptr;
    
    int a = 100;
    //ptr = &a;
    
    if(ptr==NULL) {
        printf("%d\n". *ptr);
        printf("ptr is a NULL Pointer\n");
    }
    else {
        printf("ptr is not a NULL Pointer\n");
    }
}