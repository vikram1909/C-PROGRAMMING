#include<stdio.h>
#include<stdlib.h>
void main()
{
	int *ptr,i,n,del;
	printf("Enter size of Array :-");
	scanf("%d",&n);
	ptr=(int *)calloc(n,sizeof(int));
	if(ptr==NULL)
	{
		printf("Memory can't be Allocated : \n");
		exit(0);
	}
	else
	{
		printf("Enter elements of Array :-\n");
		for(i=0;i<n;i++)
		{
			scanf("%d",&ptr[i]);
		}
	}
	printf("These are the elements of Array :-\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",ptr[i]);
	}
	printf("\nEnter the index number of Array which you want to Delete :-\n\nNOTE : Index must be lies under 0 to %d :-",n-1);
	scanf("%d",&del);
	
	if(del<n)
	{
		for(i=del;i<n-1;i++)
		{
			ptr[i]=ptr[i+1];
		}
	}
	printf("These are the elements of Array after deleting the index number %d :-\n",del);
	for(i=0;i<n-1;i++)
	{
		printf("%d\t",ptr[i]);
	}
	free(ptr);
}
