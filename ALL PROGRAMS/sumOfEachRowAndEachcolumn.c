#include<stdio.h>
void main()
{
	int a[3][3],i,j,rsum=0,csum=0;
	printf("Enter elements for 3x3 Matrix:-\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\nenter +ve value for %d,%d position:-",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("Matrix is look like :-\n");
	for(i=0;i<3;i++)
	{
		printf("\t\t\t");
		for(j=0;j<3;j++)
		{
		    printf("%d\t",a[i][j]);
		}
		printf("\n\n");
   	}
	printf("Sum of each row and each column of 3x3 Matrix are listed bellow:-\n");
	printf("\nSum of Rows:-");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		   rsum=rsum+a[i][j];
		}
			printf("\nSum of Row %d : ",i+1);
			printf("%d",rsum);
	        rsum=0;
	}
	printf("\n\nSum of Columns:-");
	for(j=0;j<3;j++)
	{
		for(i=0;i<3;i++)
		{
	    	csum=csum+a[i][j];
		}
			printf("\nSum of Collumn %d : ",j+1);
			printf("%d",csum);
	     	csum=0;
	}
}
