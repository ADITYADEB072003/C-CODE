//Write a program in C to accept a number and display all the elements of the Fibonacci series till that number.
#include <stdio.h>
int main(){
    int a=0,b=1,c,prime,i;
    printf("Enter the n number \n");
    scanf("%d",&prime);
    for(i=1;i<=prime;i++){
        printf(" [%d] \n ",a);
        c=a+b;
        a=b;
        b=c;
        

    }
    return 0;
}