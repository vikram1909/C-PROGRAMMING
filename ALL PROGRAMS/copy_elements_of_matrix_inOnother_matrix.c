#include<stdio.h>
void main()
{
	int i,j,a[3][3],n=0;
	printf("enter element of matrix :\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
		printf("element of matrix :\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n\n");
	}
	
		printf("after copy only odd element of matrix :\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(a[i][j]%2==0)
			{
				printf("%d\t",n);
			}
			else
			{
				printf("%d\t",a[i][j]);	
			}
		}
		printf("\n\n");
	}
	
	printf("after copy only even element of matrix :\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(a[i][j]%2!=0)
			{
				printf("%d\t",n);
			}
			else
			{
				printf("%d\t",a[i][j]);	
			}
		}
		printf("\n\n");
	}
}
