// program to pass structure to function by reference using pointer (call by reference)
#include <stdio.h>
struct student {
    int id;
    char name[20];

};
void display(struct student *s) {
    printf("ID: %d\n", s->id);
    printf("Name: %s\n", s->name);
    
}
int main() {
     struct student s1 = {101, "Anu"};
    
    display(&s1); // passing by reference using pointer
    return 0;
}