#include <stdio.h>
enum check{no,yes};//0,1
void main()
{
    int num;
    printf("enter number:");
    scanf("%d",&num);
    int result=fun(num);
    if(result==no)
    printf("ODD\n");
    else
    printf("EVEN\n");
}    
int fun(int num)
{
    if(num%2==no)
    return yes;//if it is even it return yes else return no
    else
    return no;
}
