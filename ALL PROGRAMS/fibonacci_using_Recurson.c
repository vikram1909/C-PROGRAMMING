#include<stdio.h>
int fib(int);
int main()
{
	int n,i=0,c;
	printf("enter limit for series :-");
	scanf("%d",&n);
	for(c=1;c<=n;c++)
	{
		printf("%d\n",fib(i));
		i++;
	}
	return 0;
}
int fib(int i)
{
	if(i==0)
		return 0;
	else if(i==1)
		return 1;
	else
		return (fib(i-1)+fib(i-2));
}
