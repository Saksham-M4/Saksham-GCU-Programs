// program to store and print multiple students record using array of structures
#include<stdio.h>
struct student {
    int id;
    char name[20];
    
};
int main () {
    struct student s[2] = { {101, "Anu"}, {102, "Vasu"} };
    for(int i = 0; i < 2; i++) {
        printf("ID: %d, Name: %s\n", s[i].id, s[i].name);
    }
    return 0;
}