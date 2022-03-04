palindrome or not 

call by value
#include<stdio.h>
int check(int n)
{
  int temp, rem, rev=0; // call by value
  temp = n;

  while( n!=0 ) 
  {
     rem = n % 10;
     rev = rev*10 + rem;
     n /= 10;
  }

  if ( rev == temp ) return 0;
  else return 1;
}

int main()
{
  int n=101;
  if(check(n) == 0)
  printf("%d is a palindrome number.\n",n);
  else
  printf("%d is not a palindrome number.\n",n);

  return 0;
}

call by reference

#include<stdio.h>

int check(int n, int *p) 
{

    int r, rev = 0;
    while (n > 0) {
        r = n % 10;
        rev = rev * 10 + r;
        n = n / 10;
    }
    *p = rev;// call by refernce rev 
}

int main() 
{

    int n =102, p = 0;
    check(n, &p);
    if (p == n) {
        printf("Number is palindrome:%d", n);
    } else {
        printf("Number is not palindrome:%d", n);
    }

    return 0;
}

