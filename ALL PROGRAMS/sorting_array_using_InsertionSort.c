#include<stdio.h>
void main()
{
	int n,arr[100],i,j,temp;
	do
	{
		printf("enter limit for Array:-");
		scanf("%d",&n);
	}while(n>100 || n<0);
	printf("\nEnter %d element for array:-\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\nBefor sorting elements of array are:-\n\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\nAfter sorting Elements Of array are :-\n\n");
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>=arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	for(j=0;j<n;j++)
	{
		printf("%d\t",arr[j]);
	}
}
