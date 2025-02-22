#include<stdio.h>
int main (){
char a;
printf("Enter any character:");
scanf("%c",&a);
if(a>='A' && a<='Z')
    printf("The entered charcter was in uppercase.In lower case is:%c",(a+32));
else
    printf("The entered charcter was in lowercase.In upper case is:%c",(a-32));
        
return 0;




}
