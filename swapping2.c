

#include <stdio.h>
int main(){
    char a[10];
    char b[10];
    char concat[30];
    char index=0;
    int i,j,k,m;
    int len1=sizeof(a)/sizeof(a[0]);
    int len2=sizeof(b)/sizeof(b[0]);
  
    printf("Enter the element of \n");
gets(a);
printf("Enter the element of b \n");
gets(b);
 for(i=0;a[i]!='\0';i++){
    concat[index]=a[i];
    index++;
 }concat[i]='\0';

 
 for(j=0;b[j]!='\0';j++){
    concat[index]=b[j];
    index++;
 }

 printf("elements stored \n");
 printf("%s ",concat);

 
  return 0;
}