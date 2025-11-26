// program  to demonstrate pointer arithmetic in C
#include<stdio.h>
int main() {

    int arr[]= {5,10,15,20,25};
    int *ptr = arr; // pointer to the first element of the array
    printf("ptr = %p,*ptr = %d\n", ptr, *ptr);
    ptr++; // move to the next integer
    printf(" After ptr = %p,*ptr = %d\n", ptr, *ptr);
    ptr+=2; // move two integers ahead
    printf(" After ptr+=2:ptr=%p,*ptr = %d\n", ptr, *ptr);
    return 0;

}
