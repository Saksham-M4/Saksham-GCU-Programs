// program : passing array of structures to function example
#include <stdio.h>
struct student {
    int id;
    char name[20];
    
};
void display(struct student s[], int n) {
    for (int i = 0; i < n; i++) {
        printf(" ID: %d, Name: %s\n", s[i].id, s[i].name);
    }
}
int main() {
    struct student students[3] = {{1, "Alice"}, {2, "Bob"}, {3, "Charlie"}};
    display(students, 3);
    return 0;

    
}