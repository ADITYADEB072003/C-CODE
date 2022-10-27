#include <stdio.h>
void mul(int n,int ma);
void mul(int n, int ma){
    int i,j;
        for(i=0;i<=n;i++){
printf("the multiplication of %d \n",i);
        for(j=0;j<=ma;j++){
        printf("the mul of %d and %d =%d \n",i,j,i*j);
        
        }
    printf("\n \n");
        
    }

}
int main(){
    int x,m ;
    
    printf("enter the value");
    scanf("%d",&x);
    printf("Enter the end range \n");
    scanf("%d",&m);
    mul(x,m);
    
    return 0;

 }
