#include<stdio.h>
int main(){
    int a[6];
    int search;
    int flag;
    printf("enter the search element");
    scanf("%d",&search);
    printf("Enter the element in \n");
    for(int i=0;i<6;i++){
        scanf("%d",&a[i]);
    };
    for(int k=0;k<6;k++){
        if(a[k]==search){
            flag=1;
            printf("the element %d is present in the array in the index %d",search,k);
        }
        

    }
     if(flag!=1){
        printf("the element is  not present in the array");
    }
    return 0 ;
}
    