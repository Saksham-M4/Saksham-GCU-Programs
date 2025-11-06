#include<stdio.h>
int main() {
    char name[20];
    int age;
    float marks;
    printf("Enter name,age and marks: ");
    scanf("%s %d %f", name, &age, &marks);
    printf("Name: %s\nAge: %d\nMarks: %.2f\n", name, age, marks);
    return 0;
}