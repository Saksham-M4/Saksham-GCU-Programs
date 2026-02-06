#include <stdio.h>

int main() {
    FILE *fp;

    fp = fopen("data.txt", "w");
    if (fp == NULL) {
        printf("File cannot be opened!\n");
        return 1;
    }

    fprintf(fp, "Welcome to File Handling in C\n");
    fprintf(fp, "This text is written to the file.\n");

    fclose(fp);
    printf("Data written successfully.\n");
    return 0;
}
