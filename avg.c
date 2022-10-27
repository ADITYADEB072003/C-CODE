#include <stdio.h>
int main(){
    int sum=0,i,n;
    float avg;
    printf("Enter a [n] number");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        sum=sum+i;
    }
avg=sum/(float) n;
printf("THe average of n munber = %f \n",avg);
printf("THe sum of n munber = %d \n",sum);

return 0;
}