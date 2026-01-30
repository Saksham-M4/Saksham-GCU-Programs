#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char password[100];
    int has_upper = 0, has_digit = 0, has_symbol = 0;
    int length, strength;

    // Input password
    printf("Enter password: ");
    scanf("%s", password);

    // Find length
    length = strlen(password);

    // Check each character
    for (int i = 0; i < length; i++) {
        if (isupper(password[i])) {
            has_upper = 1;
        } 
        else if (isdigit(password[i])) {
            has_digit = 1;
        } 
        else if (!isalnum(password[i])) {
            has_symbol = 1;
        }
    }

    // Length check
    if (length < 8 || length > 15) {
        printf("Password is Weak ❌\n");
    } 
    else {
        strength = has_upper + has_digit + has_symbol;

        if (strength == 3) {
            printf("Password is Strong 💪\n");
        } 
        else if (strength == 2) {
            printf("Password is Moderate 🙂\n");
        } 
        else {
            printf("Password is Weak ❌\n");
        }
    }

    return 0;
}




