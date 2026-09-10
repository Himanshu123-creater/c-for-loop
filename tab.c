#include<stdio.h>
int main(){
    int a;
    printf("enter the value :");
    scanf("%d",&a);
    //start
    for(int i=1; i<=10; i+=1){
        printf("\n");
        for(int b=1; b<=a; b+=1){
            printf("%d \t ", b*i);
        }
    }
}