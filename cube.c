//Write a program in C to display the cube of the number up to an integer.

#include <stdio.h>
int main(){
    int A;
    printf("Enter any number :");
    scanf("%d",&A);
    //start
    for(int i=1; i<=A; i+=1){
        printf("number is : %d and cube is : %d \n", i, i*i*i);

    }
    return 0;
}