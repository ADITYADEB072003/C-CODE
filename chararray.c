#include<stdio.h>
int main(){
    char a[20];
    int i;
printf("Enter the element in \n");
scanf("%s",a);
printf("the element of the array are \n");
printf("%s \n",a);
for(i=0;a[i]!='\0';i++);
    printf("the length of the array is %d", i);
printf("Reverse element as follow \n");
    for(int j=i;j>0;j--){
        printf("%c \n",a[j]);
    }
    return 0;
}
