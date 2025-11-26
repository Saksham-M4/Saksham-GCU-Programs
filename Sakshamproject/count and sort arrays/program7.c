//program to sort an array using double sort
#include<stdio.h>
int main() {
    int arry[5] ={10,20,30,40,50};
    int n = 5;
    int value = 35,i;
    for(i=n-1;i>=0&&arry[i]>value;i--) 
    arry[i+1]=arry[i];
    
    arry[i+1]=value;
    n=n++;
    printf("array after insertion is:\n");
    for(i=0;i<n;i++) {
        printf("%d\t",arry[i]);
        return 0;
    }
}

        




