#include <stdlib.h>
int* fib(int lengthNum){
    int *arr = malloc(lengthNum * sizeof(int));
    arr[0] = arr[1] = 1;
    for(int i = 2; i <lengthNum; i++){
        arr[i] = arr[i - 1] + arr[i -2];
    }
    return arr;
}