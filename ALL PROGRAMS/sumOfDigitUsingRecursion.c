#include<stdio.h>
void sumdig(int);
void main()
{
	int n;
	printf("enter any number:-");
	scanf("%d",&n);
	sumdig(n);
}
void sumdig(int m)
{
	static int d,sum=0;
	if(m==0)
	{
		printf("sum of digit:-%d",sum);
	}
	else
	{
		d=m%10;
		sum=sum+d;
		sumdig(m/10);                          /* we can write like this    m=m/10; 
		                                                                   sumdig(m);  */
	}
}
