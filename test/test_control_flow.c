#include "unity.h"
#include "include.h"

void setUp(void) {};
void tearDown(void) {};

void test_add(void){
    TEST_ASSERT_EQUAL(10, add(2,8));
}

void test_max(void){
    TEST_ASSERT_EQUAL(9, max(3,9));
}

int main(void){
    UNITY_BEGIN();
    RUN_TEST(test_add);
    RUN_TEST(test_max);
    return UNITY_END();
}