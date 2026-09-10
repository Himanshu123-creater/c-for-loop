#include <stdio.h>
int main(){
    int A;
    printf("Enter the number :");
    scanf("%d", &A);
    // start
    for(int i=1; i<=A; i=i+1){
        printf("%d \n",i);
    }
    return 0;
}