#include <stdio.h>
#include <string.h>

int main() {
    char username[50] = "Saksham";   // predefined username
    char confirm_password[50];      // user input

    // Show username
    printf("Username: %s\n", username);

    // User enters password
    printf("Enter password to login: ");
    scanf("%s", confirm_password);

    // Compare username and entered password
    if (strcmp(username, confirm_password) == 0) {
        printf("Valid login ✅\n");
    } else {
        printf("Invalid login ❌\n");
    }

    return 0;
}
