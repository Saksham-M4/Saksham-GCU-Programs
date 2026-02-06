#include <stdio.h>

int main() {
    FILE *fp;

    fp = fopen("data.txt", "a");
    if (fp == NULL) {
        printf("File cannot be opened!\n");
        return 1;
    }

    fprintf(fp, "This line is appended at the end.\n");

    fclose(fp);
    printf("Data appended successfully.\n");
    return 0;
}
