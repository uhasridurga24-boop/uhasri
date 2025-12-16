#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *source, *target;
    char ch;
    const char *source_file = "source.txt";
    const char *target_file = "target.txt";
    source = fopen(source_file, "w");
    if (source == NULL) {
        printf("Error: Cannot open/create source.txt\n");
        exit(1);
    }
    fprintf(source, "This is the content from the source file.\nC programming is fun!");
    fclose(source);
    printf("1. Source file ('%s') created with data.\n", source_file);
    source = fopen(source_file, "r");
    target = fopen(target_file, "w");

    if (source == NULL || target == NULL) {
        perror("Error opening files");
        exit(1);
    }
    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, target);
    }

    printf("2. Data successfully copied from '%s' to '%s'.\n", source_file, target_file);
    fclose(source);
    fclose(target);
    target = fopen(target_file, "r");
    printf("\nContent of Target File ('%s'):\n", target_file);
    while ((ch = fgetc(target)) != EOF) {
        putchar(ch);
    }
    fclose(target);

    return 0;
}
