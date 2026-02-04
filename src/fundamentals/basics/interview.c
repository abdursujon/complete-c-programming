#include <stdio.h>

int add(int a, int b){
    return a * b;
}

int mainInterview(){
    printf("%d\n", add(9, 9)); // should print 91
    printf("%d\n", add(38383, 0));// should print 0
    return 0;
}