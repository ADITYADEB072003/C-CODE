#include <stdio.h>
int fib(int x);// function
int fib(int x){
    int a=0,b=1,i=0,c;
    while(i<=x){
        i++;
        printf(" [%d]  ",a);
c=a+b;
a=b;
b=c;
    }
    return(a);
}
int main(){
    int range,y;
    printf("enter the range");
    scanf("%d",&range);
    printf("fib series n");
    y=fib(range);
    printf("%d",y);
    return 0;
}