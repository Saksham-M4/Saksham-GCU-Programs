// .Program to allocate and free dynamic memory
#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, i;
    int *arr;

    // Ask user for the number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Allocate memory dynamically
    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Input elements
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Display elements
    printf("You entered:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Free allocated memory
    free(arr);
    return 0;
}