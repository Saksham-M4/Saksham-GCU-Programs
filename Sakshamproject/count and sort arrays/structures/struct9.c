// calloc : ( contiguous  memory allocation )
// it allocates memory for an array of elements, initializes them to zero. it checks whether 
// the allocation was successsful. since all values are automatically set to 0. the loop prints 5 zeroes . finally free (arr) releases the allocated memory 
//it allocates memory for n element,each of size bytes and initializes all bytes to zero 
//both returns to the allocated memory memory ,for null .if allocatiton fails , both require to free() to release the allocated memory
 
#include <stdio.h>
#include <stdlib.h>

int main() {
    int* arr = calloc(5, sizeof(int));

    if (arr == NULL) {
        printf("Allocation failed\n");
        return 1;
    }

    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    



    free(arr);
    return 0;
}