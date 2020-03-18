#include<stdio.h>
void main()
{
	int arr[2][3][3],i,j,k;
	printf("enter element :-\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			for(k=0;k<3;k++)
			{
				scanf("%d",&arr[i][j][k]);
			}
		}
	}
	printf("multiple matrixes are :-\n");
		for(i=0;i<2;i++)
		{
			printf("    %d matrix :-\n\n",i+1);
			for(j=0;j<3;j++)
			{
				for(k=0;k<3;k++)
				{
					printf("%d\t",arr[i][j][k]);
				}
				printf("\n\n");
			}
		}
}
