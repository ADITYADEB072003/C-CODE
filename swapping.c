#include<stdio.h>
int main(){
    int a[6];
int max[0];
int min;
  int swapping;
   
    int largest=0,smallest=0;
    printf("Enter the element in \n");
    for(int i=0;i<6;i++){
        scanf("%d",&a[i]);
   
    };
    
    printf("the element of the array are \n");
for(int e=0;e<6;e++){
        printf("%d \n",a[e]);
    };
    min=a[0];
    for(int m=0;m<6;m++){

        if(a[m]>max[0]){
            max[0]=a[m];
            largest=m;
        };
        if(a[m]<min){
            min=a[m];
            smallest=m;
        }

    };
    printf("the largest element is = %d \n",max[0]);
    printf("the smallest element is = %d \n",min);
    // largest and smallest
swapping=a[smallest];
a[smallest]=a[largest];
a[largest]=swapping;

printf("swapped elements are as follow\n");
for(int k=0;k<6;k++){
    printf("%d \n",a[k]);
}
    return 0;
}