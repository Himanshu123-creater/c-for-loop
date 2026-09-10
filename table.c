//Write a program in C to display the multiplication table for a given integer.

#include <stdio.h>
int main(){
    int A;
    printf("Enter the number :");
    scanf("%d",&A);
    //start
    for(int i=1; i<=10; i+=1 ){
        printf("%d  X  %d  =  %d \n", A,i, A*i);
    }
    return 0;
}