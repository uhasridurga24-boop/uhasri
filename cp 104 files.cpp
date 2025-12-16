#include <stdio.h>
#include <stdlib.h>

void file_copy(FILE *source, FILE *target);

int main() {
    FILE *file1, *file2, *merged_file;
    const char *f1_name = "file1.txt";
    const char *f2_name = "file2.txt";
    const char *merged_name = "merged.txt";
    file1 = fopen(f1_name, "w");
    fprintf(file1, "Line 1 from File 1.\nLine 2 from File 1.\n");
    fclose(file1);

    file2 = fopen(f2_name, "w");
    fprintf(file2, "Line A from File 2.\nLine B from File 2.\n");
    fclose(file2);

    printf("Files '%s' and '%s' created for merging.\n", f1_name, f2_name);
    file1 = fopen(f1_name, "r");
    file2 = fopen(f2_name, "r");
    merged_file = fopen(merged_name, "w");

    if (file1 == NULL || file2 == NULL || merged_file == NULL) {
        perror("Error opening files");
        return 1;
    }
    file_copy(file1, merged_file);
    file_copy(file2, merged_file);
    fclose(file1);
    fclose(file2);
    fclose(merged_file);

    printf("Data from '%s' and '%s' merged into '%s' successfully.\n", f1_name, f2_name, merged_name);
    printf("\nContent of Merged File:\n");
    merged_file = fopen(merged_name, "r");
    char ch;
    while ((ch = fgetc(merged_file)) != EOF) {
        putchar(ch);
    }
    fclose(merged_file);

    return 0;
}
void file_copy(FILE *source, FILE *target) {
    char ch;
    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, target);
    }
}
