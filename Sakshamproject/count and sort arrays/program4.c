#include <stdio.h>
#include <string.h>

struct Book {
    int id;
    char title[50];
    char author[50];
};

int main() {
    
    struct Book b1 = {101, "C Programming", "Dennis Ritchie"};
    struct Book b2 = {102, "Data Structures", "Mark Weiss"};
    struct Book b3 = {103, "Operating System", "Silberschatz"};

    
    struct Book *books[3] = {&b1, &b2, &b3};

    int searchId;
    printf("Enter Book ID to search: ");
    scanf("%d", &searchId);

    int found = 0;

    
    for (int i = 0; i < 3; i++) {
        if (books[i]->id == searchId) {
            printf("\nBook Found!\n");
            printf("ID: %d\n", books[i]->id);
            printf("Title: %s\n", books[i]->title);
            printf("Author: %s\n", books[i]->author);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("\nBook Not Found.\n");
    }

    return 0;
}
