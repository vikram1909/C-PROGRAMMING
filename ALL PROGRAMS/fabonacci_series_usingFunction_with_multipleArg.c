#include<stdio.h>
void fab(int,int,int);
void main()
{
	int n,a=0,b=1;
	printf("Enter limit for series :-");
	scanf("%d",&n);
	fab(n,a,b);
}
void fab(int n,int a,int b)
{
	int i,c;
	printf("%d\n%d\n",a,b);
	for(i=1;i<n;i++)
	{
		c=a+b;
		a=b;
		b=c;
		printf("%d\n",c);
	}
}
