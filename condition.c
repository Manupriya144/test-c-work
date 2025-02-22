#include<stdio.h>
int main()
{
    int a,b,large;
    printf("Enter the values of a and b:");
    scanf("%d %d",&a, &b);
    if(a>b)
        large=a;
    else
        large=b;    
    printf("Large number is:%d\n",large);
    return 0;
}