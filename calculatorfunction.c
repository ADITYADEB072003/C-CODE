#include <stdio.h>
// function declared
int add(int,int);
int sub (int ,int);
int div (int ,int);
int mul(int ,int);
int mod(int ,int);
// function defined
int add(int x,int y){
    int s;
    s=x+y;
    return (s);
}
int sub(int a,int y){
int d;
d=a-y;
return (d);
}
int div(int e,int r){
    int q;
    q=e/r;
    return (q);

}
int mul (int w,int t){
    int i;
    i=w*t;
    return(i);

}
int mod(int q,int r){
    int p;
    p=q%r;
    return (p);

}
int main(){
    int x,y;
    char choice;
    printf("A.add \n B .sub \n C. div \n D.mul \n E.mod \n" );
    printf("Enter your choice\n ");
    scanf("%c",&choice);
    printf("Enter the two no \n");
    scanf("%d",&x);
    scanf("%d",&y);
    if (choice=='a'){
        int t;
        t=add(x,y);
        printf("the sum = %d \n ",t);
    }
    else if(choice == 'b'){
        int y1;
        y1=sub(x,y);
        printf("The difference = %d \n",y1);

    }
    else if (choice=='c'){
        int j;
        j=div(x,y);
        printf("the div = %d",j);

    }
    else if(choice=='d'){
        int h;
        h=mul(x,y);
        printf("the multiplication=%d \n",h);

    }
    else if(choice=='e'){
        int y1;
        y1=mod(x,y);
        printf("the remainder = %d\n",y1);
    }
    else{
        printf("enter a valid input");
    
    return 0;
}
}

