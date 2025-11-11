#include<stdio.h>
int main() {
    int age;
    float marks;
    char name[20];
    printf("Enter  name: ");
    scanf("%s", name);
    printf("Enter age: ");
     scanf("%d", &age);
    printf("Enter marks: ");
     scanf("%f", &marks);
     printf("\nStudent Details:\n");
     printf("Name:%s\nAge:%d\nMarks:%.2f\n", name, age, marks);
        return 0;
    }


