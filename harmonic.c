// Write a program in C to display the n terms of a harmonic series and their sum.
// 1 + 1/2 + 1/3 + 1/4 + 1/5 ... 1/n terms
// Test Data :
// Input the number of terms : 5
// Expected Output :
// 1/1 + 1/2 + 1/3 + 1/4 + 1/5 +
// Sum of Series upto 5 terms : 2.283334

# include<stdio.h>
int main(){
    int A;
    printf("Input the number of term :");
    scanf("%d",&A);

    //start
    float sum=0;
    for(float i=1; i<=A; i+=1){
        printf("1/%1.f + ",i);
        sum=sum+1/i;
    }
    printf("\n Sum of the series upto %d term is : %f", A, sum);
    return 0;

}