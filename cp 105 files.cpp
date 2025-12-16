#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char filename[] = "sample.txt";
    char ch;
    int char_count = 0;
    int word_count = 0;
    int line_count = 0;
    int in_word = 0; 
    fp = fopen(filename, "w");
    fprintf(fp, "This is line one.\n");
    fprintf(fp, "This is line two.\n");
    fprintf(fp, "Line three ends here."); 
    fclose(fp);
    fp = fopen(filename, "r");
    if (fp == NULL) {
        perror("Error opening file");
        return 1;
    }
    
    printf("Analyzing file: %s\n", filename);
    while ((ch = fgetc(fp)) != EOF) {
        char_count++;
        if (ch == '\n') {
            line_count++;
        }
        if (isspace(ch) || ch == '\n' || ch == '\t') {
            in_word = 0; 
        }
        else if (in_word == 0) {
            in_word = 1; 
            word_count++;
        }
    }
    if (char_count > 0 && ch != '\n') {
        line_count++; 
    }

    fclose(fp);

    printf("--- Analysis Results ---\n");
    printf("Total Characters: %d\n", char_count);
    printf("Total Words:      %d\n", word_count);
    printf("Total Lines:      %d\n", line_count);

    return 0;
}
