// program to use typedef with structure 
#include <stdio.h>
typedef struct {
    int id;
    char name[20];
    float salary;
} Employee;
int main() {
    Employee e1 = {1001, "Kiran", 45000.50};
    printf("Employee ID: %d\n", e1.id);
    printf("Name: %s\n", e1.name);
    printf("Salary: %.2f\n", e1.salary);
    return 0;
}