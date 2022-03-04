swapping two numbers 
 
using macors without temp varible

#include <stdio.h>
#define swap(x,y)(x^=y^=x^=y)
int main()
{
  int x=10,y=5;
  printf("before swapping:x=%d & y=%d\n",x,y);
  swap(x,y);
  printf("after swapping:x=%d & y=%d\n",x,y);
  return 0;
}
using macors with temp varible

#include <stdio.h>
#define swap(x,y,temp)  temp=x;x=y;y=temp;
int main()
{
  int x=10,y=5,temp;
  printf("before swapping:x=%d & y=%d\n",x,y);
  swap(x,y,temp);
  printf("after swapping:x=%d & y=%d\n",x,y);
  return 0;
}

using call by value without temp varible

#include <stdio.h>
int swap(int x,int y)
{
    x=x+y;
    y=x-y;
    x=x-y;
    printf("after swapping:x=%d & y=%d\n",x,y);
}
int main()
{
  int x=10,y=5;
  printf("before swapping:x=%d & y=%d\n",x,y);
  swap(x,y);
  return 0;
}
  
  using call by value with temp 
#include <stdio.h>
int swap(int x,int y)
{
    int temp=x;
    x=y;
    y=temp;
    printf("after swapping:x=%d & y=%d\n",x,y);
}
int main()
{
  int x=10,y=5;
  printf("before swapping:x=%d & y=%d\n",x,y);
  swap(x,y);
  return 0;
}
   
using call by reference without temp  
#include <stdio.h>
int swap(int *x,int *y)
{
    *x=*x+*y;
    *y=*x-*y;
    *x=*x-*y;
    printf("after swapping:x=%d & y=%d\n",*x,*y);
}
int main()
{
  int x=10,y=5;
  printf("before swapping:x=%d & y=%d\n",x,y);
  swap(&x,&y);
  return 0;
}

using call by reference with temp 
#include <stdio.h>
int swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
    printf("after swapping:x=%d & y=%d\n",*x,*y);
}
int main()
{
  int x=10,y=5;
  printf("before swapping:x=%d & y=%d\n",x,y);
  swap(&x,&y);
  return 0;
}


