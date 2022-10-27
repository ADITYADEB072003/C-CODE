#include <stdio.h>
int main(){
    int firstyear,lastyear,i,year;
    printf("Enter the first year");
    scanf("%d",&firstyear);
    printf("Enter the end year");
    scanf("%d",&lastyear);
    for(i=firstyear;i<=lastyear;i++){
        year=i;
        if((year%4==0 && year%400==0)||(year%100!=0)){
        printf("%d is leap year \n \t",year);
    }
    else{
        printf("[%d is  not a leap year \n \t ]",year);
    }
    }
    return 0;
}