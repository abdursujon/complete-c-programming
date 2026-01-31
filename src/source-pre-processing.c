// 1. Source pre-processing : run to see pre processed output: gcc -E source-pre-processing.c | grep -A 20 "int main"
// Create file with conditional compilation 
#include <stdio.h>

#define DEBUG 
#define PI 3.14

int main() {
    #ifdef DEBUG
        printf("Debug mode ON\n");
    #else 
        printf("Release mode\n");
    #endif
    
    float area = PI * 6 * 6;
    printf("Area: %f\n", area);
}


