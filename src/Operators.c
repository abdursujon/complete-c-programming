#include <stdio.h>
#include <stdlib.h>
int mainOperators(){
    // 1. Arithmetic operators 
    int a = 10, b = 3;
    int sum = a + b;
    int diff = a - b;
    int prod = a * b;
    int div = a / b;
    int mod = a % b; 
    printf("%d, %d, %d, %d, %d, %d, %d", a, b, sum, diff, prod, div, mod);

    // 2. Relational operators 
    // ==, !=, >, <, >=, <=

    // 3. Logical operator 
    // && , ||, !b

    // 4. Bitwise operator 
    int x = 5, y =3;
    int AND = x & y;
    int OR = x | y;
    int XOR = x ^ y;
    int NOT = ~x;
    int LEFT = x << 1;
    int RIGHT = y >> 1;

    // 5. Assignment operators 
    int z = 44;
    z += 5;
    z -= 4;
    z *= 2;
    z /= 4;
    z %= 2;
    z &= 5;
    z |= 3;
    z ^= 6;
    z <<= 7;
    z >>= 6;

    // 6. increment and decrement operators 
    int c = 5;
    int d = c++;
    int e = ++c;
    int f = c--;
    int g = --c;

    //7. Conditional ternary operator
    int h = 44, i = 33;
    int max = (i > h) ? h : i;
    char *result = (h == i) ? "h is equals to i" : "h and i not equal";
    
    // 8. Comma operator 
    int j, k, l;
    j = (k =4, l = 44, k + l);
    for (int i = 0, j = 10; i < j; i++, j--){
        printf("%d",j);
    }
    for(int i=2, j=110; i<j; i++, j--){
        printf("%d", j);
    }

    // 9. Size of operator 
    int size1 = sizeof(int) * 3;
    int arr[10];
    int size2 = sizeof(arr);
    printf("%d", size2);

    // 10. Pointer Operators 
    int *ptr = &k; // holds address of x 
    int value = *ptr; // dereference 
    *ptr = 20; // k is now 20

    // 11. Cast operator 
    float result2 = (float) a / b;
    int *ptr2 = (int*)malloc(sizeof(int)); // malloc is used to allocate a block of memory on the heap , heap is memory region in a RAM
    char c2 = (char)65;
}