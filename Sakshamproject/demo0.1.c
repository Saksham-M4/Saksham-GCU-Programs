#include <stdio.h>

int main() {
    int a, b, sum;
    float average;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    sum = a + b;
    average = sum / 2.0;

    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);

    return 0;
}
