#include<stdio.h>
int table2(int,int);
int main()
{
	int n,i,r;
 	printf("enter a number :-");
	scanf("%d",&n);
	printf("\nTable of %d is :-\n",n);
	for(i=1;i<=10;i++)
	{
		r=table2(n,i);
		printf("%d x %d = %d\n",n,i,r);
	}
}
int table2(int n,int i)
{
	return(n*i);
}
