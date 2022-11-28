#include <stdio.h>
int main(){
    int no;
    int r;
    int reversed=0;
    int original;
    original=no;
    printf("enter the number \n");
    scanf("%d",&no);
    while(no>0){
        r=no%10;
        reversed=reversed*10+r;
        no=no/10;


    }
    if(original==reversed){
        printf("it is a palindrome \n");
    }
    else{
        printf("not a palindrome \n");
    }
    printf("the reversed no is = %d \n",reversed);
    return 0;
}