#include <stdio.h>
int b (int);
int c (int);
int b (int x){
    int n,i,s=0;
    for(i=0;i<x;i++){
        printf("Enter the  number \n");
        scanf("%d",&n);
        if(n<0){
            break;
        }
        s+=n;
        
    }
    
    return (s);
}
int c (int x){
    int n,i,s=0;
    for(i=0;i<x;i++){
        printf("Enter the n number \n");
        scanf("%d",&n);
        if(n<0){
            continue;
        }
        s+=n;
        
    }
    
    return (s);
}
void main(){
    int a,b1,c1;
    
    char choice;
    printf("A. break\n B. continue \n");
    printf("enter your choice \n");
    scanf("%c",&choice);
    printf("enter the number");
    scanf("%d",&a);
    if(choice=='a'){
        b1=b(a);
    printf("sum of n number = %d \n",b1);}
    else if (choice=='b')
    {c1=c(a);
          printf("sum of n number = %d \n",c1);  }
    else{
        printf("Enter proper choice \n");
    }
}