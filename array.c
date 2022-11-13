#include<stdio.h>
int main(){
    int a[6];
    int l[0];
    printf("Enter the element in \n");
    for(int i=0;i<6;i++){
        scanf("%d",&a[i]);
    };
    printf("the element of the array are \n");
for(int e=0;e<6;e++){
        printf("%d \n",a[e]);
    };
// to reverse an element ....
printf("The reverse element are as follow \n");
for(int j=5;j>=0;j--){
    
    printf(" %d \n",a[j]);
};
    for(int m=0;m<6;m++){

        if(l[0]<a[m]){
            l[0]=a[m];
        };

    };
    printf("the largest element is = %d \n",l[0]);
return 0;
}