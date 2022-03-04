4.Find the second largest element in a array - use fns passing array as parameter  / macros 


#include<stdio.h>
#define n 5
void array_sec_largest(int a[])
{
    int i,j;
	for(i=0;i<n;i++) 
    {
        for(j=i+1;j<n;j++) 
        {
            if (a[i]<a[j]) 
            {
                int t;
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    printf("\n\nSecond largest number is %d",a[1]);
}

int main()
{
    int a[n],b=0,i;
    for(i=0;i<n;i++) 
    {
        printf("\nEnter element %d\t",i+1);
        scanf("%d",&a[i]);
    }
    array_sec_largest(a);
    return 0;
}
