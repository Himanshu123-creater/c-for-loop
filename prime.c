// Write a program in C to find the prime numbers within a range of numbers.
// Test Data :
// Input starting number of range: 1
// Input ending number of range : 50
// Expected Output :
// The prime number between 1 and 50 are :
// 2 3 5 7 11 13 17 19 23 29 31 37 41 43 47

#include <stdio.h>
int main(){
    int A;
    printf("Eneter the final range : ");
    scanf("%d",&A);
    // int B;
    // printf("Eneter the ending range : ");
    // scanf("%d",&B);

    //start
    for(int i=2; i<=A-1; i+=1){
        if(A%i!=0){
             printf("%d \n ", i);
            
        }
        
    return 0;
}