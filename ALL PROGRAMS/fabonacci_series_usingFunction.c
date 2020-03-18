#include<stdio.h>
void fab(int);
void main()
{
	int n,a=0,b=1;
	printf("Enter limit for series :-");
	scanf("%d",&n);
	printf("%d\n%d\n",a,b);
	fab(n);
}
void fab(int n)
{
	int a=0,b=1,i,c;
	for(i=1;i<n;i++)
	{
		c=a+b;
		a=b;
		b=c;
		printf("%d\n",c);
	}
}
