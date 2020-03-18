#include<stdio.h>
void main()
{
	int a[3][3],i,j;
	printf("enter element for matrix : \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("_____Before transpose of matrix_____\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n\n");
	}
		printf("_____After transpose of matrix_____\n");
	for(j=0;j<3;j++)
	{
		for(i=0;i<3;i++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n\n");
	}
}
