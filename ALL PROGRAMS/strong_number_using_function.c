#include<stdio.h>
int strong(int);
void main()
{
	int c,n;
	printf("enter any number:-");
    scanf("%d",&n);   
    c=strong(n);
	if(n==c)
	{
		printf("\n\tEntered number %d is a strong number\n",c);
	}
	else
	{
		printf("\n\tEntered number %d is not a strong number\n",c);
	}
}
int strong(int n)
{
	int i,d,f=1;
	int sum=0;
	while(n>0)
	{
		d=n%10;
		f=1;
		for(i=1;i<=d;i++)
		{
			f=f*i;
		}
		sum=sum+f;
		n=n/10;
	}
   return sum;
}
