#include<stdio.h>
void fact();
void main()
{
	fact();
	
}
void fact()
{
	int n,i,f=1;
	printf("enter any number:-");
	scanf("%d",&n);
	i=n;
	while(n>0)
	{
		f=f*n;
		n--;
	}
	printf("\nfactorial of %d is:-%d\n",i,f);
}
