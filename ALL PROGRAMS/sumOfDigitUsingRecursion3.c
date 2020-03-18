#include<stdio.h>
#include<stdlib.h>
int sumdig(int);
void main()
{
	int n,r;
	printf("enter a number to find sum of its digits :-");
	scanf("%d",&n);
	printf("\nSum of digits of %d is = %d",n,sumdig(n));
}
int sumdig(int n)
{
	static	int sum=0,r;
	if(n==0)
		return sum;
	else
	{
		sum=sum+n%10;
		r=sumdig(n/10);
	}
}
