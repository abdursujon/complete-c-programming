#include <stdio.h>

int main() {
    FILE *fp = fopen("src/job/test2.txt", "r+");

    if(fp == NULL){
        printf("File does not exist\n");
        return -1;
    }

    char line[10];
    if(fgets(line, sizeof(line), fp) == NULL){
        printf("File is empty\n");
    } else {
        do{
            printf("%s", line);
        } while(fgets(line, sizeof(line), fp));
    }
    
    fprintf(fp, "I love brocli");
    printf("\n");
    fclose(fp);
    return 0;

}