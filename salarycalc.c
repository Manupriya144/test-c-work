
//salary calculation .question attach on image album 01 


#include<stdio.h>
int main(){
    char sex;
    float bonus,salary,salary_with_bonus;
    printf("Enter the sex of the employee type m or f:");
    scanf("%c",&sex);
    printf("Enter the salary of the employee:");
    scanf("%f",&salary);
    if(sex=='m','M')
        bonus=0.05*salary;
    else
        bonus=0.10*salary;
    if(salary<10000)
        bonus+=0.02*salary;
    
    salary_with_bonus=bonus+salary;
    printf("The employee full bonus is:%.2f\n",bonus);
    printf("The employee full salary is:%.2f",salary_with_bonus);
    return 0;




}