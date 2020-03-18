#include<stdio.h>
void main()
{
	int n=5;
	int i,j,k;
	for(i=1;i<=n;i++)
	{
		for(j=n-1;j>=i;j--)
		{
			printf("A\t");
		}
		for(k=1;k<=i;k++)
		{
			printf("a\t");
		}
		printf("\n\n");
	}
}
