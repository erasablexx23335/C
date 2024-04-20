#include<stdio.h>
#include<stdlib.h>

    int sum = 34;
int* functionDangling(){
    int a, b, sum;
    a = 34;
    b = 75;
    sum = a + b;
    return &sum;
}

int main(){
    int *ptr = (int *) malloc(7* sizeof(int));
    ptr[0] = 34;
    ptr[1] = 36;
    ptr[2] = 64;
    ptr[3] = 5;
}