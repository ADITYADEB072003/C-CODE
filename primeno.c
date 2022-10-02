#include <stdio.h>
int main(){
    int prime,i,j;
    printf("Enter a no  \n");
    scanf("%d",&prime);
    for(i=2;i<=prime;i++){
        for(j=2;j<=i;j++){
        if(i%j==0){
            break;
        }}
    
        if(i==j){
            printf("The number is a prime no  %d \n ",i);

        }
    }
        return 0;
    
}