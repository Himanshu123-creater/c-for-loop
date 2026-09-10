// Write a program in C to display a pattern like a right angle triangle using an asterisk.

// The pattern like :

// *
// **
// ***
// ****

# include <stdio.h>
int main(){
    int A;
    printf("Enter the length :");
    scanf("%d",&A);
    //start
    char star='*';
    for(int i=1; i<=A; i+=1){
        printf("\n");
        for(int a=1; a<=i; a+=1){
            printf ("%c \t",'*');
            
        }
    }
    return 0;
}