#include <stdio.h>

#define DEBUG

int main() {
    int a = 10, b = 5, sum;
    sum = a + b;

#ifdef DEBUG
    printf("Debug: a = %d, b = %d\n", a, b);
#endif

    printf("Sum = %d\n", sum);
    return 0;
}
