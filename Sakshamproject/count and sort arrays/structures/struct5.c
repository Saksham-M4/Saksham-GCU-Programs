// program to access structure members using pointer

#include<stdio.h>
struct student {
    int id;
    char name[20];
};
int main () {
    struct student s = {101, "Anu"};
    struct student *ptr = &s;
    // Accessing structure members using pointer
    printf("ID: %d\n", ptr->id);
    printf("Name: %s\n", ptr->name);
    
    return 0;
}