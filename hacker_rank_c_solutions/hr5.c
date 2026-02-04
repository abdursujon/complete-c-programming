#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function
    int pa = *a + *b;
    int pb = *a - *b;
    if(pb < 0) {
        pb = -(pb);
    }
    *a = pa;
    *b = pb;
}


int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}