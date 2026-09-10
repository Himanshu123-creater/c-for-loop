// Write a C program to display a pattern like a right angle triangle with a number.

// The pattern like :

// 1
// 12
// 123
// 1234

#include <stdio.h>
int main(){
    int A;
    printf("input number of term :");
    scanf("%d", &A);
    // start
    for(int i=1; i<=A; i+=1){
        printf("\n");
        for(int a=1; a<=i ; a+=1){
            printf("%d",a);
        }
    }
    return 0;
}