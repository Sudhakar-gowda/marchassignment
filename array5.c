5.Reverse an array and print the values - use fns passing array as parameter  / macros

#include <stdio.h>
void reverse(int arr[10], int n);
void main()
{
  int arr[10], i, size;
  printf("Enter size of array: ");
  scanf("%d",&size);
  printf("Enter the elements of the array: ");
  for (i = 0; i < size; i++)
    scanf("%d", &arr[i]);
  reverse(arr,size); // call reverse function 
  printf("After reversing the array: ");  // display reversed array 
  for(i=0;i < size;i++)
  {
    printf("%d ", arr[i]);
  }
}
void reverse(int arr[10], int n)
{
  int i, temp;
  for(i=0;i< n/2;i++)
  {
    temp = arr[i];
    arr[i] = arr[n-1-i];
    arr[n-1-i] = temp;
  }
}
