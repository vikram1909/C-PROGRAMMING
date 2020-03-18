/*Searching element from the Array :*/
#include<stdio.h>
void search(int [],int);
void main()
{
	int a[5],n,i;
	printf("Enter elements for Array :-\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter that number which you want to search :-");
	scanf("%d",&n);
	search(a,n);
}
void search(int x[],int y)
{
	int i,flag=0;
	for(i=0;i<5;i++)
	{
		if(x[i]==y)
		{
			printf("\nThe number %d is founded at %d position:-\n",y,i+1);
			flag+=1;
		}
	}
	if(flag==0)
			printf("\nNumber %d is not Presented in the Array : \n",y);
	
}
