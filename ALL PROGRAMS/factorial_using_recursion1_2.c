#include<stdio.h>
void main()
{
 	long n;
 	long fact(long);
 	printf("enter a number:-");
 	scanf("%ld",&n);
 	
 	printf("\nFactorial of %ld is :- %ld",n,fact(n));
}
long fact(long n)
{
	if(n==1)
	{
		return 1;
	}
	else
	{
		return (n*fact(n-1));
	}
}
