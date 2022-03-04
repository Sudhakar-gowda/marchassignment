#include<stdio.h>
int d[5];  //Global declaration of array
int main()
{
	int a[5],i; 
	int b[5]={10,20,30,40,50};
	int c[5]={10,20};
	char ch[5]={'a','b','c','d','e'};
	int e[5]={1,2,3,4,5};
	
	for(i=0;i<5;i++)
		printf("\nAddress of char elements:%u\n",&ch[i]); //Name of the array is address of the array
		
	printf("\nElements of array:");
	for(i=0;i<5;i++)
	{
		printf("%d\t",a[i]); //prints garbage
	}
	printf("\n");
	
	printf("\nArray of elements:");
	for(i=0;i<5;i++)
		printf("%d\t",b[i]); 
	printf("\n");
	
	printf("\nThe array of elements:");
	for(i=0;i<5;i++)
		printf("%d\t",c[i]);
	printf("\n");
	
	printf("\nGlobal elements of array:");
	for(i=0;i<5;i++)
		printf("%d\t",d[i]);
	printf("\n");
	
	printf("\nAddress of elements without using for/while loop:\n");
	printf("Array of address of 1st element of array:%p\n",&b[0]);
	printf("Array of address of 2st element of array:%p\n",&b[1]);
	printf("Array of address of 3st element of array:%p\n",&b[2]);
	printf("Array of address of 4st element of array:%p\n",&b[3]);
	printf("Array of address of 5st element of array:%p\n",&b[4]);
	
	printf("\nUsing while loop:\n");
	/*for(i=0;i<5;i++)
		printf("%d\n",e[i]);*/
	int j=0;
	while(j<5)
	{
		printf("\nArray of elements:%d\n",e[j]);
		j++;
	}
}
