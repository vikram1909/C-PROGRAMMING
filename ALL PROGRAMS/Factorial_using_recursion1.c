#include<stdio.h>
void main()
{
 	long r,n;
 	long fact(long);
 	printf("enter a number:-");
 	scanf("%ld",&n);
  	r=fact(n);
 	printf("\nFactorial of %ld is :- %ld",n,r);
}
long fact(long n)
{
   	 static long f=1;
	if(n==1)
	{
		return 1;
	}
	else
	{
		f=f*n;
		fact(n-1);
		return f;
	}
}
