#include <stdio.h>
#include <stdlib.h>
 
int main() {
     int *ptr = (int *)malloc(sizeof(int)); // normal pointer
 
    *ptr = 15;
 
    // memory block deallocated using free() function
    free(ptr);
 
 
    // here ptr acts as a dangling pointer
    printf("%d", *ptr);
}