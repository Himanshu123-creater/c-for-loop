// Write a C program to display the n terms of odd natural numbers and their sum.
// Test Data
// Input number of terms : 10
// Expected Output :
// The odd numbers are :1 3 5 7 9 11 13 15 17 19
// The Sum of odd Natural Number upto 10 terms : 100

#include <stdio.h>
int main(){
    int A;
    printf("input number of term :");
    scanf("%d", &A);
    //start
    int sum=0;
    for(int i=1; i<=2*A; i+=1){
        if(i%2!=0){
            printf(" %d ", i);
            sum=sum+i;
            
        }
    }
    printf("\n");
    printf("The sum of odd  natural number is : %d ", sum);
    return 0;
}
