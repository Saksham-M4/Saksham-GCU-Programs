#include<stdio.h>
int main() {
    const int maxScore = 95;
    volatile int sensorValue = 45;
    printf("Constant value: %d\n", maxScore);
    printf("Volatile value: %d\n", sensorValue);
    return 0;
}