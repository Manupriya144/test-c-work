#include<stdio.h>
int main()
{  /* //sizeof
   int x=2999933454;
   printf("%d",sizeof(x));
   return 0;  
   
   //comma operator
   int m=4;
   int n;
   n= (m=1,m*2);
   printf("n:%d\n",n);         

   //ascii
   char ch;
   printf("Enter any charcter:");
   scanf("%c",&ch);
   printf("The ascii value of %c is:%d",ch,ch);*/


    int num1,num2;
    printf("Enter the first number:\n");
    scanf("%d",num1);
    printf("Enter the second number:\n");
    scanf("%d",num2);
    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;
    printf("This is first number number:%d",num1); 
    printf("This is second  number:%d",num2);

   return 0;
}