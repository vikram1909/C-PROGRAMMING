#include<stdio.h>
void main()
{
	int a[3][3],i,j;
	int *ptr;
//	ptr=&a[0][0];
	ptr=(*(a+0)+0);
	printf("enter the array elements:-\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("elements in matrix form:-\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",*ptr);
			ptr++; 
		}
		printf("\n\n");
	}
}
