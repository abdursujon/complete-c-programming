#include <stdio.h>
int main()
{
    int arr[] = {1, 2, 4, 5, 6, 7};
    char *name[] = {"Sujon", "Ryan", "James"};
    char name2[2][20] = {"Alice", "Bob"};
    float arr2[] = {1.2, 3.4, 3.3, 8.3};
    double arr3[] = {3.333, 181.33, 89.2};

    printf("%d\n", arr[2]);
    printf("%s\n", name[0]);
    printf("%s\n", name2[1]);
    printf("%f\n", arr2[2]);
    printf("%f\n", arr3[1]);
}
