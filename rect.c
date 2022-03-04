area of rectangle
 area=length *width;

call by value 
#include <stdio.h>

int find_area(int l,int w) 
{
    int area=w*l; 
    return area;
}
void main ()
{
    int l=10,w=5;
    int area= find_area(l,w); // 10*5=50
    printf("%d\n",area);  //output=50
}

using macros
#include <stdio.h>
#define	area(l,w) (l*w);
 
int main()
{
	
	float l=10,w=5,area;
	
	area=area(l,w);
	printf("%f\n",area);
	return 0;
	
}

call by reference

#include <stdio.h>
int area(int *l,int  *w,int *area)
{
	*area=((*l)*(*w));
}
 
int main()
{
    
   unsigned int l=10,w=5,a;
 
	area(&l,&w,&a);
	printf("%u\n",a);
	return 0;
}
