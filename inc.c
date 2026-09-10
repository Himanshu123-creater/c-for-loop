// Write a program in C to make such a pattern like a right angle triangle with the number increased by 1.

// The pattern like :

//    1
//    2 3
//    4 5 6
//    7 8 9 10

#include<stdio.h>
int main(){
    int A;
    printf("input number of term :");
    scanf("%d", &A);

    // start
    
    for(int i=1; i<=A; i+=1){
        int sum=0;
        
        printf("\n");
        for(int a=1; a<=i; a+=1){
            printf( "%d  \t", a);
            sum=sum+a;
            }
        printf(" \t\t\t: %d ", sum);

    }
    return 0;


}