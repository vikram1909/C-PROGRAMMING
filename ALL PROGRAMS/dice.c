#include<stdio.h>
void main()
{
	int i,j,k,n;
	printf("enter any number:-");
	scanf("%d",&n);
	for(i=1;i<=6;i++)
	{
		for(j=1;j<=6;j++)
		{
			for(k=1;k<=6;k++)
			{
				if(n==(i+j+k))
				{
					printf("%d %d %d \n",i,j,k);
				}
			}
		}
	}
}
