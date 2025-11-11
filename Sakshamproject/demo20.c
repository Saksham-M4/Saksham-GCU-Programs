#include<stdio.h>
int main()  {
    int age;
    float height;
    char grade;
    printf("Enter age:");
    scanf("%d", &age);
    printf("Enter height:");
    scanf("%f", &height);
    printf("Enter grade(A/B/C):");
    scanf(" %c", &grade);
    printf("\n--- Student Details ---\n");
    printf("Age: %d years\n", age);
    printf("Height: %.1f \n", height);
    printf("Grade: %c\n", grade);
    return 0;
}

