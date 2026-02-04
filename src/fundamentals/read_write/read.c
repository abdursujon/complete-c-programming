#include <stdio.h>

int main() {
    FILE *filePointer = fopen("src/job/test.txt", "r+");

    if(filePointer == NULL){
        printf("File does not exists\n");
        return 1;
    }

    char line[1000];
    if(fgets(line, sizeof(line), filePointer) == NULL){
        printf("File is empty\n");
    } else {
        do {
            printf("%s", line);
        } while(fgets(line, sizeof(line), filePointer));
    }
    fprintf(filePointer, "I love mushroom\n");
    printf("\n");
    fclose(filePointer);
    return 0;
}