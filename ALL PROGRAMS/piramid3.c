#include<stdio.h>

void main()
{
	int i,j,k,n;
	printf("enter any number:-");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			printf(" ");
		}
		for(k=1;k<=i*2-1;k++)
		{
			printf("*");
		}
		printf("\n");
    }
	for(i=n-1;i>=1;i--)
	{
		for(j=n-1;j>=i;j--)
		{
			printf(" ");
		}
		for(k=1;k<=i*2-1;k++)
		{
			printf("*");
		}
		
		printf("\n");
	}

}
