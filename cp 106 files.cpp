#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> 

int main() {
    FILE *fp_in, *fp_out;
    char ch;
    const char *in_file = "original.txt";
    const char *out_file = "modified.txt";
    fp_in = fopen(in_file, "w");
    fprintf(fp_in, "Hello World 123! @#$% C pRoGrAm.");
    fclose(fp_in);
    printf("Input file '%s' created.\n", in_file);
    fp_in = fopen(in_file, "r");
    fp_out = fopen(out_file, "w");

    if (fp_in == NULL || fp_out == NULL) {
        perror("Error opening files");
        return 1;
    }
    while ((ch = fgetc(fp_in)) != EOF) {
        char processed_ch = ch;

        if (islower(ch)) {
            processed_ch = toupper(ch);
        } else if (isupper(ch)) {
            processed_ch = tolower(ch);
    }

        fputc(processed_ch, fp_out);
    }

    printf("Case conversion complete. Output written to '%s'.\n", out_file);

    fclose(fp_in);
    fclose(fp_out);
    printf("--- Output File Content ---\n");
    fp_out = fopen(out_file, "r");
    if (fp_out != NULL) {
        while ((ch = fgetc(fp_out)) != EOF) {
            putchar(ch);
        }
        printf("\n");
        fclose(fp_out);
    }

    return 0;
}
