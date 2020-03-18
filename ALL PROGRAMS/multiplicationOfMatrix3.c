#include<stdio.h>
void main()
{
	int fst[10][10],sec[10][10],multi[10][10];
	int i,j,k,r1,r2,c1,c2,sum=0;
	printf("Enter Row and Column of First Matrix :\n");
	scanf("%d%d",&r1,&c1);
	printf("Enter elements for %d x %d 1st Matrix : \n",r1,c1);
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d",&fst[i][j]);
		}
	}
	xy:
	printf("\nEnter Row and Column of Second Matrix :\n");
	scanf("%d%d",&r2,&c2);
	if(c1!=r2)
	{
		printf("\nMatrixes can't be Multiply...please enter valid row and column : \n");
		goto xy;
	}
	else
	{
		printf("Enter elements for %d x %d 2nd Matrix : \n",r2,c2);
    	for(i=0;i<r2;i++)
		{
			for(j=0;j<c2;j++)
			{
				scanf("%d",&sec[i][j]);
			}
		}	
	}
	printf("\n_____First Matrix_____\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf("%d\t",fst[i][j]);
		}
		printf("\n\n");
	}
	printf("\n_____Second Matrix_____\n");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf("%d\t",sec[i][j]);
		}
		printf("\n\n");
	}	
	
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			for(k=0;k<r2;k++)
			{
				sum+=fst[i][k]*sec[k][j];
			}
			multi[i][j]=sum;
			sum=0;
		}
	}
	printf("\n____After multiplication of both matrix____\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf("%d\t",multi[i][j]);
	    }
	    printf("\n\n");
	}
}

