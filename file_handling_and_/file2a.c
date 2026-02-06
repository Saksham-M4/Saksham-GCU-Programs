#include <stdio.h>

int main() {
    FILE *fp;

    fp = fopen("example.txt", "w");
    if (fp == NULL) {
        printf("File opening failed!\n");
        return 1;
    }

    printf("File opened successfully.\n");
    fclose(fp);
    printf("File closed successfully.\n");

    return 0;
}
