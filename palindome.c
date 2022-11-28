#include<stdio.h>

int main(){
char a[20];
char b[20];
int k,g,j,i, count=0 ,index=0;
printf("Enter the a string \n");
scanf("%s",a);
// finding the length of the array a
for(i=0;a[i]!='\0';i++);
// storing the value of i in variable g;
g=i;
// decreasing the value of array a by 1;
i--;
//reversing the value and storing it in b;
for(;i>=0;i--){
    b[index]=a[i];
    index++;
}// adding a null value to the end of the array;
b[index]='\0';
// checking whether the element of a matches b 
for(k=0;a[k]!='\0';k++){
    if(b[k]==a[k]){
        count++;
    }
}
// if the count value is equal to the lenght of array...
if(count==g){
    printf("palindrome \n");
}
else{
    printf("not a palindrome \n");

}
return 0;
}