#include <stdio.h>

union Data {
    int i;
    float f;
    char ch;
};

int main() {
    union Data d;

    d.i = 10;
    printf("d.i = %d\n", d.i);

    d.f = 5.75;
    printf("d.f = %.2f\n", d.f);

    d.ch = 'A';
    printf("d.ch = %c\n", d.ch);

    return 0;
}
