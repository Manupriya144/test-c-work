
//largest of 5 numbers


#include<stdio.h>
int main(){
    int i=0,large=-1,num;
    while(i<5)
    {
        printf("Enter the number:");
        scanf("%d",&num);
        large=num>large?num:large;
        i++;
    }

printf("The large Number is:%d",large);
return 0;

}