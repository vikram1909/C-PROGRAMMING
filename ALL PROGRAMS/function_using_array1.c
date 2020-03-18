#include<stdio.h>
void arr(int [],int);
void main()
{
	int a[10],n;
	
	arr(a,n);
}
void arr(int x[],int l)
{
	int i;
	printf("enter lenth of array :");
	scanf("%d",&l);
	for(i=0;i<l;i++)
	{ 
	printf("enter %d elements :",i+1);
		scanf("%d",&x[i]);
	}
	for(i=0;i<l;i++)
	{
		printf("%d\n",x[i]);
	}
}
