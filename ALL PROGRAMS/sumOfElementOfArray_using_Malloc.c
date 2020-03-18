#include<stdio.h>
#include<stdlib.h>
void main()
{
	int *arr,n,i,sum=0;
	do
	{
		printf("Enter limit of array :-");
		scanf("%d",&n);
	}while(n>100 || n<0);
	arr=(int *)malloc(n*sizeof(int));
	if(arr==NULL)
	{
		printf("memory cant allocated:-\n");
		exit(0);
	}
	printf("Enter %d elements for Array :-\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);//scanf("%d",(arr+i));
	}
	printf("Sum of elements of Array is:-");
	for(i=0;i<n;i++)
	{
		sum=sum+arr[i];//sum=sum+(*(arr+i));
	}
	printf("%d",sum);
}
