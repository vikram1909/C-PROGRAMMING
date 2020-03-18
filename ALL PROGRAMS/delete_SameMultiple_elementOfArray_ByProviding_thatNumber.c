#include<stdio.h>
#include<stdlib.h>
void main()
{
	int *ptr,i,j,n,del,ind,flag=0,t=0;
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
	printf("\nEnter that number of Array which you want to Delete from the Array :-");
	scanf("%d",&del);
	for(j=0;j<n;j++)
	{
		for(i=0;i<n;i++) 
		{
			if(ptr[i]==del)
			{
				ind=i;
				t++;
				for(i=ind;i<=n-t;i++)
				{
					ptr[i]=ptr[i+1];
				}
			}
			else
			{
				flag+=1;
			}
		}
	}
	
	if(flag!=n*n)
 	{
		printf("\nThese are the elements of Array after deleting  %d number :-\n\n",del);
		for(i=0;i<n-t;i++)
		{
			printf("%d\t",ptr[i]);
		}
	}
	else
	{
		printf("\nentered number %d does not exist in the Array..\n\nPlease enter that number which is available int Array :-\n",del);
	}
	printf("\n\nThere are %d times %d founded in the Array :-\n",t,del);
	free(ptr);
}
