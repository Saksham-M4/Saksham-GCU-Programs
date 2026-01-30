// Program to count the frequency of each character in a string
#include <stdio.h>
#include <string.h>

#define MAX 100

int main() {
    char str[MAX];
    int freq[256] = {0};   // Frequency array for all ASCII characters

    // Input string
    printf("Enter a string: ");
    fgets(str, MAX, stdin);

    // Remove newline character added by fgets
    str[strcspn(str, "\n")] = '\0';

    // Calculate frequency of each character
    for (int i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
    }

    // Print character frequencies
    printf("Character frequencies:\n");
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            printf("'%c' : %d\n", i, freq[i]);
        }
    }

    return 0;
}
