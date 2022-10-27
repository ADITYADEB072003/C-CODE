#include <stdio.h>
int main(){
    int firstyear,lastyear,i,year,n;
    
    printf("Enter the first year");
    scanf("%d",&firstyear);
    printf("Enter the end year");
    scanf("%d",&lastyear);
    i=firstyear;
    
    do{
        i++;
        year=i;
        
        
        if((year%4==0 && year%400==0)||(year%100!=0)){
        printf("%d is leap year \n \n",year);}    
    else{
        printf("[%d not a leap year \n ]",year);
    }
    }while(i<=lastyear);

    return 0;
}