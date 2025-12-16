#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char filename[] = "reverse_input.txt";
    long file_size;
    fp = fopen(filename, "w");
    fprintf(fp, "I am testing file reversal.");
    fclose(fp);
    printf("Input file '%s' created.\n", filename);
    fp = fopen(filename, "r");
    if (fp == NULL) {
        perror("Error opening file");
        return 1;
    }
    fseek(fp, 0, SEEK_END);
    file_size = ftell(fp);

    printf("--- Reversed Content ---\n");
    for (long i = 1; i <= file_size; i++) {
        fseek(fp, -i, SEEK_END); 
        putchar(fgetc(fp));
    }
    
    printf("\n");
    fclose(fp);

    return 0;
}
