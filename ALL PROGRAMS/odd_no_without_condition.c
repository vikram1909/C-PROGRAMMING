#include<stdio.h>
void main()
{
	int i,n;
	printf("enter the length of odd number series:-");
	scanf("%d",&n);
	for(i=1;i<=n;i=i+2)
	{
		printf(" %d",i);
	}
}
