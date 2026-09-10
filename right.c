// Write a program in C to make such a pattern like a right angle triangle with a number which will repeat a number in a row. C programming ebook

// The pattern like :

//  1
//  22
//  333
//  4444

#include <stdio.h>
int main(){
    int A;
    printf("input number of term :");
    scanf("%d", &A);

    // start

    for(int i=1; i<=A; i+=1){
        printf("\n");
        for(int a=1; a<=i; a+=1){
            printf("%d",i);
        }
    }
    return 0;
}
