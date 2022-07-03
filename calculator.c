#include <stdio.h>
int main()
{
char choice;
int x,y;
float result;
printf("Select an operator (+, -, *, /) to perform an operation in C calculator \n ");
scanf("%c",&choice);
printf("enter the first number");
scanf("%d",&x);
printf("enter the second number");
scanf("%d",&y);

if (choice == '+'){
    result=x+y;
    printf("addition of %d and %d is %f",x,y,result);
    }
    else if (choice == '-'){
        result=x-y;
        printf("subtraction of %d and %d is %f",x,y,result);

    }
    else if(choice =='*'){
        result=x*y;
        printf("mulitplication %f",result);
    }
    else if (choice == '/')  
    {  
        if (y == 0)   // if y == 0, take another number  
        {  
            printf (" \n Divisor cannot be zero. Please enter another value ");  
            scanf ("%d", &y);        
        }  
        result = x / y; // divide two numbers  
        printf (" Division of %d and %d is: %.2f", x, y, result);  
    }  
    else{
        printf("\n you have entered the wrong inputs");
    }



return 0;

}