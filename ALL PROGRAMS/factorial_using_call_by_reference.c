#include<stdio.h>
int fact(int *);
void main()
{
	int n,r;
	printf("enter a number to find factorial :");
	scanf("%d",&n);
	r=fact(&n);
	printf("Factorial := %d",r);
}
int fact(int *n)
{
	int f=1,i;
	for(i=1;i<=*n;i++)
	{
		f=f*i;
	}
	return f;
}
