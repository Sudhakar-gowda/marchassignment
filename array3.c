3. Sort  an array of 10 integers in decreasing order 
Use fns - pass array as parameter 


#include<stdio.h>
void desc_sort(int a[100], int n); // Function prototype
void main()
{
 int a[100], i, n;
 printf("Enter n:\n");
 scanf("%d", &n);
 for(i=0;i< n;i++) // Reading array
 {
  printf("a[%d]=",i);
  scanf("%d", &a[i]);
 }
 desc_sort(a,n); //Function call
 printf("Array in descending order is:\n"); // Displaying sorted array
 for(i=0;i< n;i++)
 {
  printf("%d\t", a[i]);
 }
}
void desc_sort(int a[10], int n) // Function definition
{
 int i, j, temp;
 for(i=0;i< n-1;i++)
 {
  for(j=i+1;j< n;j++)
  {
   if(a[i]< a[j])
   {
    temp = a[i];
    a[i] = a[j];
    a[j] = temp;
   }
  }
 }
}
