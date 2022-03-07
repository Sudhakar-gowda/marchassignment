little endian and big endian

https://www.youtube.com/watch?v=a9lVoThjV7o
#include <stdio.h>
int main()
{
   unsigned int i = 1;
   char *c = (char*)&i;
   if (*c)   
       printf("Little endian");
   else
       printf("Big endian");
   return 0;
}


get size of pointer

https://www.youtube.com/watch?v=_EaAZYSvBog 

#include<stdio.h>  
  
int main()  
{  
    printf("Size of int pointer = %d bytes.\n", sizeof(int*));  
    printf("Size of char pointer = %d bytes.\n", sizeof(char*));  
    printf("Size of float pointer = %d bytes.\n", sizeof(float*));  
    printf("Size of double pointer = %d bytes.\n", sizeof(double*));  
    printf("Size of long int pointer = %d bytes.\n", sizeof(long*));  
    printf("Size of short int pointer = %d bytes.\n", sizeof(short*));  
  
    return 0;  
}  



get the size of array

https://technotip.com/8874/c-program-to-find-size-of-an-array/

#include<stdio.h>

int main(void) 
{
    int number[16];
    
    size_t n = sizeof(number)/sizeof(number[0]);
    printf("Total elements the array can hold is: %d\n",n);
    
    return 0;
}
 size opertors--https://www.youtube.com/watch?v=z4H-UN8BRNQ

get the size of struct

https://www.youtube.com/watch?v=6QMrbogJd8U
#include<stdio.h>
 
struct stud 
{
   int roll;
   char name[10];
   int marks;
};
 
int main() 
{
   int size;
   struct stud s;
 
   size = sizeof(s);
   printf("nSize of Structure : %d", size);
 
   return(0);
}


declare array of pointer
https://www.youtube.com/watch?v=X4XkMrmyb0c
https://www.log2base2.com/C/pointer/array-of-pointers-in-c.html

#include <stdio.h>
 
const int MAX = 3;
 
int main () {

   int  var[] = {10, 100, 200};
   int i, *ptr[MAX];
 
   for ( i = 0; i < MAX; i++) {
      ptr[i] = &var[i]; /* assign the address of integer. */
   }
   
   for ( i = 0; i < MAX; i++) {
      printf("Value of var[%d] = %d\n", i, *ptr[i] );
   }
   
   return 0;
}
