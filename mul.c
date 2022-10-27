#include <stdio.h>
int main(){
    int i,j,ma,n;
    printf("enter the value");
    scanf("%d",&n);
    printf("Enter the end range \n");
    scanf("%d",&ma);
    for(i=0;i<=n;i++){
printf("the multiplication of %d",i);
        for(j=0;j<=ma;j++){
        printf("the mul of %d and %d =%d \n",i,j,i*j);
        
        }
    printf("\n \n");
        
    }
return 0;
}
