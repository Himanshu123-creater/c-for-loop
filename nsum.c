#include <stdio.h>
int main(){
    int A;
    printf("Enter the value :");
    scanf("%d",&A);
    int sum=0;
    for (int i=1; i<=A; i+=1){
        sum=sum+i;
    }
    printf("The sum is 1 t0 %d is : %d ",  A, sum);
    return 0;

}