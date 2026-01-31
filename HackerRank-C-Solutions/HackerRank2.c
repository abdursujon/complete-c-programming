#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch;
    scanf("%c", &ch);
    scanf("%*c");
    printf("%c\n", ch);  
    
    char s[100];
    scanf("%99s", s);
    scanf("%*c");
    printf("%s\n",s);
    
    char sen[100];
    scanf("%99[^\n]", sen);
    printf("%s\n", sen);  
    return 0;
}