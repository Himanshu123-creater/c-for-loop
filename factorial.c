// Write a C program to calculate the factorial of a given number.
// Test Data :
// Input the number : 5
// Expected Output :
// The Factorial of 5 is: 120

#include <stdio.h>
int main(){
    int A;
    printf("input number of term :");
    scanf("%d", &A);

    // start
    int factorial=1;
    for(int i=1; i<=A ; i+=1){
        factorial=factorial*i;   
    }
    printf("factorial of %d is : %d", A, factorial);
    return 0;
}