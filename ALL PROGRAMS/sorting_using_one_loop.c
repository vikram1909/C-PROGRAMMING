#include<stdio.h>
void main()
{
	int i,j,t,n[10];
	printf("neter element of array :\n ");
	for(i=0;i<10;i++)
	{
		scanf("%d",&n[i]);
	}
	
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(n[i]>=n[j])
			{
				t=n[i];
				n[i]=n[j];
				n[j]=t;	
			}
		}	
	}
	printf("the numbers arranged in ascending order : \n");
	for(i=0;i<10;i++)
		printf("%d\n",n[i]);
}
