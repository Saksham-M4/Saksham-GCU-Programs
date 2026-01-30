// program to demonstrate nested structures in C
#include <stdio.h>
struct date {
    int day;
    int month;
    int year;
};
struct student {
    
    int id;
    char name[20];
    struct date dob; // nested structure
};
int main() {
    struct student s1 = { 101,"Kiran", {15, 8, 2000}};
    printf("Name: %s\n", s1.name);
    printf("DOB: %d-%d-%d\n", s1.dob.day, s1.dob.month, s1.dob.year);
    return 0;
}