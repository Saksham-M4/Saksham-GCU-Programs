#include <stdio.h>

void display(int arr[], int n) {
    printf("Array elements: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arry[5] = {10, 20, 30, 40, 50};
    display(arry, 5);
    return 0;
}
