#include <stdio.h>
int main(){
    int prime,i,count=0;
    printf("Enter a number");
    scanf("%d",&prime);
    for(i=1;i<=prime;i++){
        if(prime%i==0){
            count++;
        }
    }
    if(count==2){
        printf("the no is prime no");
    }
    else{
        printf("the no is not a prime no");
    }}