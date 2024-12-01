#include<stdio.h>

int main() {
    int a = 10;
    float b = 5.34;
    char c = 's';
    void* ptr;
    
    //set integer value
    ptr = &a;
    printf("int value : %d\n", *(int*)ptr); //Typecast when dereference(mandatory)
    
    //set float value
    ptr = &b;
    printf("float value : %f\n", *(float*)ptr);
    
    //set char value
    ptr = &c;
    printf("char value : %c\n", *(char*)ptr);
} 