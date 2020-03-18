#include<stdio.h>
void table1(int);
void main()
{
	int n;
	printf("enter a number :-");
	scanf("%d",&n);
	table1(n);
}
void table1(int n)
{
	int i;
	printf("\nTable of %d is :-\n",n);
	for(i=1;i<=10;i++)
	{
		printf("%d x %d = %d\n",n,i,n*i);
	}
}
