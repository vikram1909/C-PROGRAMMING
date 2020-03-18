#include<stdio.h>
void main()
{
	int i,j,t,n;
	printf("neter element no of elemnet:\n ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n enter the array element:");
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;	
			}
		}	
	}
	printf("the numbers arranged in ascending order : \n");
	for(i=0;i<n;i++)
		printf("%d\n",a[i]);
}	
