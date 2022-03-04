fibonacciSeries with call by value
#include<stdio.h>
void fibonacciSeries(int range)
{
   int a=0, b=1, c;
   while (a<=range)
   {
     printf("%d\t", a);
     c = a+b;
     a = b;
     b = c;
   }
}

int main()
{
   int range;

   printf("Enter range: ");
   scanf("%d", &range);

   printf("The fibonacci series is: \n");

   fibonacciSeries(range);

   return 0;
}

using macros

#include <stdio.h>
#define  data 

int fibonacci(int);
int main()
{
    
    printf("fibonacci series is:");
    fibonacci(data); 
    return 0;
}

int fibonacci(int n)
{
    int i,a=0,b=1,c;
    for(i=0;i<n;i++)
    {
        printf("%d",a);
        c=a+b;
        a=b;
        b=c;
    }
}
 call by reference

#include<stdio.h>
void fabio_ref(int *a);
int main()
{
	int n;
	printf("enter a number:");
	scanf("%d",&n);
	fabio_ref(&n);
}
void fabio_ref(int *a)
{
	int a1=0,b=1,c=0,i;
	printf("%d\t",c);
	for(i=1;i<*a;i++)
	{
		a1=b;
		b=c;
		c=a1+b;
		printf("%d\t",c);
	}
}
