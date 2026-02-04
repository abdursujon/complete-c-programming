#include "unity.h"
#include "../functions.h"
#include <stdlib.h>

void setUp(void){}; // runs before each test. Use it to initialize variables, allocate memory, reset state. 
void tearDown(void){};// runs after each test. Use it to free memory, clean up resources 

void test_fib(void){
    int expected[] = {1, 1, 2, 3, 5, 8, 13, 21, 34, 55};
    int *result = fib(10);

    printf("Result: [");
    for(int i =0; i<10; i++){
        printf("%d", result[i]);
        if(i < 9) printf(",");
        if(i == 9) printf("]");
    } 
    printf("\n");

    TEST_ASSERT_EQUAL_INT_ARRAY(expected, result, 10);
    free(result);
}

int main(void){
    UNITY_BEGIN();
    RUN_TEST(test_fib);
    return UNITY_END();
}