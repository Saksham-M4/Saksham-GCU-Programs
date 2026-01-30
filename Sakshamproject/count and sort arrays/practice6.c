#include <stdio.h>
#include <limits.h>

int main()
{
    int arr[] = {12, 35, 1, 10, 34, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int largest = INT_MIN;
    int second_largest = INT_MIN;

    int smallest = INT_MAX;
    int second_smallest = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        // Find largest and second largest
        if (arr[i] > largest)
        {
            second_largest = largest;
            largest = arr[i];
        }
        else if (arr[i] > second_largest && arr[i] != largest)
        {
            second_largest = arr[i];
        }

        // Find smallest and second smallest
        if (arr[i] < smallest)
        {
            second_smallest = smallest;
            smallest = arr[i];
        }
        else if (arr[i] < second_smallest && arr[i] != smallest)
        {
            second_smallest = arr[i];
        }
    }

    printf("Second Largest: %d\n", second_largest);
    printf("Second Smallest: %d\n", second_smallest);

    return 0;
}