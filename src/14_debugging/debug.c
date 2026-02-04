#include <stdio.h>
#define DEBUG 

int checkValidInt(int a, int b){
    #ifdef DEBUG
        printf("[DEBUG] checkValidInt called: a=%d, b=%d\n", a, b);
    #endif
    if(b == 0){
        #ifdef DEBUG 
            printf("[DEBUG] ERROR: devisor cannot be zero!\n");
        #endif
        return -1;    
    }
    return a / b;    
}

int main(){
    printf("Answer: %d\n", checkValidInt(-2, 0));
    printf("Answer: %d\n", checkValidInt(5, 0));
    printf("Answer: %d\n", checkValidInt(125, 9));
    return 0;
}