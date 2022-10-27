#include <stdio.h>
int leap(int ,int);
int leap(int firstyear,int lastyear){
    int i ,year;
    for(i=firstyear;i<=lastyear;i++){
        year=i;
        if((year%4==0 && year%400==0)||(year%100!=0)){
        printf("%d is leap year \n \t",year);
    }
    else{
        printf("[%d is  not a leap year \n \t ]",year);
    }
    return 0;
    }
}
int main(){
    int firstyear;
    int lastyear;
    printf("Enter the first year");
    scanf("%d",&firstyear);
    printf("Enter the end year");
    scanf("%d",&lastyear);
    leap(firstyear,lastyear);
    return 0;
}