#include <stdio.h>

int main() {
    int n, i, j, temp;
    int arr[100];
    int key;
    int low, high, mid;
    int found = 0;

    // Input array size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // -------- Bubble Sort --------
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Display sorted array
    printf("Sorted array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Input element to search
    printf("Enter element to search: ");
    scanf("%d", &key);

    // -------- Binary Search --------
    low = 0;
    high = n - 1;

    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == key) {
            printf("Element found at index %d\n", mid);
            found = 1;
            break;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    // -------- Closest Elements --------
    if (!found) {
        printf("Element not found\n");

        if (high >= 0)
            printf("Closest smaller element: %d\n", arr[high]);
        else
            printf("No smaller element exists\n");

        if (low < n)
            printf("Closest larger element: %d\n", arr[low]);
        else
            printf("No larger element exists\n");
    }

    return 0;
}