
//nested loop examples

#include<stdio.h>
int main()
{
int x,y;
for(x=1;x<=10;x++){
    for(y=1;y<=x;y++){
        printf("*");

    }
    printf("\n");
}
return 0;
}