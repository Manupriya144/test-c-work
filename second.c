#include<stdio.h>

int main()
{
//unary increement
int x=3;
printf("%d\n", x--);
printf("%d\n", x);



//logical operator
int a=2,b=2,c;
printf("%d\n",a);
printf("%d\n",b);
c=a&&b;
printf("%d\n",c); 

//conditional operator ternary find the large number between two number
int num1,num2 , large;
printf("Enter the First Number:");
scanf("%d",&num1);
printf("Enter the Second Number:");
scanf("%d",&num2);
large= num1 > num2 ? num1:num2 ;
printf("The Large NUmber is:%d",large);

//conditional operator ternary find the large number between three number   */

int num3,num4,num5,larger;
printf("Enter the First Number:");
scanf("%d",&num3);
printf("Enter the Second Number:");
scanf("%d",&num4);
printf("Enter the Third Number:");
scanf("%d",&num5);

larger= num3 > num4 ? (num3 > num5 ? num3 : num5) : (num4>num5 ? num4 : num5);
printf("The larger Number Is:%d",larger);



  return 0;


}
