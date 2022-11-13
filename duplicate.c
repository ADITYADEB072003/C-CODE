#include <stdio.h>
int main(){
  
    int i,j,count=0;
  
    int n,k;
    int a[6];
   
    printf("enter the element of the array \n");
    for(k=0;k<6;k++){
        scanf("%d",&a[k]);

    };
    printf("the duplicate elements are as follow \n");
    for(i=0;i<6;i++){
        for(j=i+1;j<6;j++){
            if(a[i]==a[j]){
                printf("%d \n",a[j]);
              
                count ++;
            }
        }
    }
    printf("the total no of duplicate element are = %d \n ",count);
    return 0;
}