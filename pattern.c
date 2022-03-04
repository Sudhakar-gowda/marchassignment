pattern1

* 
* * 
* * * 
* * * *
* * * * * 
#include <stdio.h>

int main()
{
    int n=5,i,j;
    
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
       
        {
            printf("*");
            
        }
    
        printf("\n");
        
    }

    return 0;
} 


pattern2

        *
      * *
    * * *
  * * * *
* * * * *

#include <stdio.h>

int main()
{
    int n=5,i,j,k;
    
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)
       
        {
            printf(" ");
            
        }
        for (k=1;k<=i;k++)
        {
            printf("*");
            
        }
    
        printf("\n");
        
    }

    return 0;
}


pattern3
* * * * * *
* * * * *
* * * *
* * *
* *
*
#include <stdio.h>

int main()
{
    int n=5,i,j;
    
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)
       
        {
            printf("*");
            
        }
    
        printf("\n");
        
    }

    return 0;
}



pattern4 
*****
 ****
  ***
   **
    *

#include <stdio.h>

int main()
{
    int n=5,i,j,k;
    
   for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
       
        {
            printf(" ");
            
        }
        for(k=i;k<=n;k++)
        {
            printf("*");
        }
    
        printf("\n");
        
    }

    return 0;
}

pattern7

*****
*****
*****
*****
*****

#include <stdio.h>

int main()
{
    int n=5,i,j;
    
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
       
        {
            printf("*");
            
        }
    
        printf("\n");
        
    }

    return 0;
}


pattern 10
        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *
#include <stdio.h>

int main()
{
    int n=5,i,j,k;
    
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(k=1;k<=2*i-1;k++)
        {
            printf("*");
            
        }
        printf("\n");     
    }

    return 0;
}

pattern 11

* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *

#include <stdio.h>

int main()
{
    int n=5,i,j,k;
    
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(k=1;k<=2*i-1;k++)
        {
            printf("*");
            
        }
        printf("\n");
        
    }

    return 0;
}

pattern 17

1
12
123
1234
12345
1234
123
12
1

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int n=5,i,j;

  for (i = 1; i <=n; i++) 
  {
    for (j = 1; j <= i; j++)
      printf("%d", j);
    printf("\n");
  }
  for (i = n-1; i >= 0; i--) 
  {
    for (j = 1; j <= i; j++)
      printf("%d", j);
    printf("\n");
  }
  printf("\n");
}

pattern6

* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *
        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *

#include <stdio.h>

int main()
{
    int n=5,i,j,k;
    
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(k=1;k<=2*i-1;k++)
        {
            printf("*");
            
        }
        printf("\n");
        
    }
     for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(k=1;k<=2*i-1;k++)
        {
            printf("*");
            
        }
        printf("\n");     
    }

    return 0;
}
   
pattern 15 

    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *

#include <stdio.h>

int main()
{
    int n=5,i,j,k;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(k=1;k<=2*i-1;k++)
        {
            printf("*");
            
        }
        printf("\n");     
    }

    for(i=n-1;i>=1;i--)
    {
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(k=1;k<=2*i-1;k++)
        {
            printf("*");
            
        }
        printf("\n");
        
    }
     
    return 0;
}
   
pattern 5 
*       *
**     **
***   ***
**** ****
*********
#include <stdio.h>  
  
int main()  
{  
    int i, j,n=5, k;  
    for ( i = 1; i <= n; i++)  
    {  
          
        for ( j = 1; j <= n; j++)  
        {  
            if( j <= i)  
            printf ("*");   
            else  
            printf(" ");  
        }  
        for (j = n; j >= 1; j--)  
        {  
            if(j <= i)  
            printf ("*");  
            else  
            printf(" ");  
        }  
        printf ("\n");  
    }  
}  


pattern 12

*****
 *****
  *****
   *****
    *****

include <stdio.h>  
  
int main()  
{  
    int i, j,n=5, k;  
    for ( i = 1; i <= n; i++)  
    {  
          
        for ( j = 1; j<i; j++)  
        {  
            printf (" ");   
        }  
        for (k = 1; k<=n;k++)  
        {  
            printf("*");  
        }  
        printf ("\n");  
    }  
}   

pattern 13

    *****
   *****
  *****
 *****
*****

#include <stdio.h>  
  
int main()  
{  
    int i, j,n=5, k;  
    for ( i = 1; i <= n; i++)  
    {  
          
        for ( j = i; j<=n; j++)  
        {  
            printf (" ");   
        }  
        for (k = 1; k<=n;k++)  
        {  
            printf("*");  
        }  
        printf ("\n");  
    }  
}  

pattern 8
*
**
***
****
*****
 ****
  ***
   **
    *
#include <stdio.h>

int main()
{
    int n=5,i,j,k;
    
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
       
        {
            printf("*");
            
        }
    
        printf("\n");
        
    }
   for(i=1;i<=n-1;i++)
    {
        for(j=1;j<=i;j++)
       
        {
            printf(" ");
            
        }
        for(k=i;k<=n-1;k++)
        {
            printf("*");
        }
    
        printf("\n");
        
    }

    return 0;
} 


pattern 9
    *
   **
  ***
 ****
*****
****
***
**
*

#include <stdio.h>

int main()
{
    int n=5,i,j,k;
    
    for(i=1;i<=n;i++)
    {
        for(j=i;j<n;j++)
       
        {
            printf(" ");
            
        }
        for(k=1;k<=i;k++)
        {
            printf("*");
        }
       
        printf("\n");
        
    }
   for(i=1;i<=n-1;i++)
    {
        for(j=i;j<=n-1;j++)
       
        {
            printf("*");
            
        }
        
        printf("\n");
        
    }

    return 0;


} 

pattern 14
    *
    **
    ***
    ****
    ***** 
*****
****
***
**
*
#include <stdio.h>

int main()
{
    int n=5,i,j,k;
    
    for(i=1;i<=n;i++)
    {
        for(j=1;j<n+1;j++)
       
        {
            printf(" ");
            
        }
        for(k=1;k<=i;k++)
        {
            printf("*");
        }
    
        printf("\n");
        
    }
    
   for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
       
        {
            printf(" ");
            
        }
        for(k=i;k<=n;k++)
        {
            printf("*");
        }
    
        printf("\n");
        
    }

    return 0;
}

