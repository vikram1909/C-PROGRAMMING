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
	free(ptr);
}
