// Write a C program to display the sum of n terms of even natural numbers.
// Test Data :
// Input number of terms : 5
// Expected Output :
// The even numbers are :2 4 6 8 10
// The Sum of even Natural Number upto 5 terms : 30

#include <stdio.h>
int main(){
    int A;
    printf("input number of term :");
    scanf("%d", &A);
    // start
    int sum=0;
    for(int i =1; i<=2*A; i+=1){
        if(i%2==0){
            printf("  %d  ", i);
            sum=sum+i;
        }
    }
    printf("\n");
    printf("The sum of even natural number upto %d term is : %d ", A,sum);
    return 0;


}
