// program to allocate memory using malloc() and display values 
// what is Malloc?
// program allocates memory for 5 integers using malloc and checks whether the memory allocation was successful 
// then it stores in the allocated memory with values from 1 to 5 and displays them using a loop 
// it freezes allocated memory
#include <stdio.h>
#include <stdlib.h>
int main () {
    int *ptr;
    ptr = (int*) malloc(5 * sizeof(int)); 
    if (ptr == NULL) {
        printf("Memory not allocated.\n");
        return 1;
    }
    for (int i = 0; i < 5; i++) {
        ptr[i] = i + 1;
    }
    for (int i = 0; i < 5; i++) {
        printf("%d ", ptr[i]);
    }
    free(ptr);
    return 0;
}