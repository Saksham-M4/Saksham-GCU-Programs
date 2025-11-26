#include <stdio.h>       // program to search element using linear search

int main() {
    int arr[5] = {10, 25, 30, 45, 50};
    int i, key, found = 0;

    printf("Enter element to search: ");
    scanf("%d", &key);

    for (i = 0; i < 5; i++) {
        if (arr[i] == key) {
            found = 1;
            break;
        }
    }

    if (found) {
        printf("Element %d found at index %d\n", key, i);
    } else {
        printf("Element %d not found in the array\n", key);
    }

    return 0;
}
