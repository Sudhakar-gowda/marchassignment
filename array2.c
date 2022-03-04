
2. Take an array of 10 char - if they are vowels 
 print elements 
 their positions 
 their address 

#include<stdio.h>
int main()
{
	char c[10]={'a','b','c','D','e','E','g','M','o','A'};
	int i;
	for(i=0;i<10;i++)
	{
		if(c[i]=='a' || c[i]=='A' || c[i]=='e' ||c[i]=='E' ||c[i]=='i'|c[i]=='I'||c[i]=='O'||c[i]=='o'||c[i]=='u'||c[i]=='U')
		{
			printf("Array of vowel element:%c\n",c[i]);
			printf("Array of char address is:%p\n",&c[i]);
			printf("Array of position:%d\n",i);
		}
	}
}

