#include<stdio.h>
void main()
{
	int n,copy,i,rev=0;
	printf("enter a number :-");
	scanf("%d",&n);
//	copy=n;
	for(copy=n;copy>0;copy=copy/10)
	{
		i=copy%10;
		rev=rev*10+i;
	}
	printf("After reverse the number is %d\n",rev);
	if(rev==n)
	{
		printf("\nnumber is pellindrome:-\n");
	}
	else
	{
		printf("\nnumber is not pellindrome:-\n");
	}
}
