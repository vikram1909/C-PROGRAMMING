#include<stdio.h>
#include<stdlib.h>
int sumdig(int);
void main()
{
	int n,r;
	printf("enter a number to find sum of its digits :-");
	scanf("%d",&n);
	r=sumdig(n);
	printf("\nSum of digits of %d is = %d",n,r);
}
int sumdig(int n)
{
	int sum=0;
	if(n==0)
		return(0);
	else
		return (n%10+sumdig(n/10));
	
}
