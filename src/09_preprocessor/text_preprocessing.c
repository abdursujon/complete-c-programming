// Run: gcc text-pre-processing.c -o text-pre-processing && ./text-pre-processing
//Create a simple text pre-processing in C 
// cat > text-pre-processing.c << 'EOF'
#include <stdio.h>
#include <string.h>

int mainTextPreProcessing(){
    char template[] = "Hello {{NAME}}, your score is {{SCORE}}.";
    char output[256];
    char *name = "Sujon";
    int score = 95;

    // Simple template expansion 
    strcpy (output, template);

    // Replace {{NAME}}
    char *pos = strstr(output, "{{NAME}}");
    if (pos) {
        char temp[999999];
        *pos = '\0';
        sprintf(temp, "%s%s%s", output, name, pos + 8);
        strcpy(output, temp);
    }

    // Replace {{SCORE}}
    pos = strstr(output, "{{SCORE}}");
    if (pos){
        char temp[77777];
        *pos = '\0';
        sprintf(temp, "%s%d%s", output, score, pos + 9);
        strcpy(output, temp);
    }

    printf("Before: %s\n", template);
    printf("After: %s\n", output);
}
