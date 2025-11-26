// program: binary search
#include <stdio.h>

int main() {
    int arr[6] = {5, 12, 18, 25, 32, 40};
    int low = 0, high = 5, mid, key;

    printf("Enter element to search: ");
    scanf("%d", &key);

    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == key) {
            printf("Element %d found at index %d\n", key, mid);
            return 0;   // end the program after finding element
        }
        else if (arr[mid] < key) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    printf("Element %d not found in the array\n", key);
    return 0;
}
