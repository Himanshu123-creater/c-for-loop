//Write a program in C to read 10 numbers from the keyboard and find their sum and average.

#include <stdio.h>
int main(){
    int sum=0;
    for(int i=1; i<=10;i=i+1){
        int temp;
        printf("number  %d :",i);
        scanf("%d",&temp);
        sum=sum+temp;

    }
    printf("the sum of 10 number is : %d \n", sum);
    float avg;
    avg=sum/10;
    // printf("%2.f",avg);
    // printf("the average of 10 number is : %f \n", avg);
    return 0;

}