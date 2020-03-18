#include<stdio.h>
void main()
{
	int n,i=2;
	printf("enter the number:-");
	scanf("%d",&n);
	while(i<=n && n%i!=0)
	{
		i+=1;
	}
	if(i==n)
	{
		printf("number is prime");
	}
	else
	{
		printf("number is not prime");
	}
}
