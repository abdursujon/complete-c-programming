#include <stdio.h>

int main()
{
	int a;
    int b;
    float c;
    float d;
    
    printf("Enter number: ");
    scanf("%d %d %f %f", &a, &b, &c, &d);
    printf("Number: %d %d %f %f \n", a, b, c, d);
    return 0;
}