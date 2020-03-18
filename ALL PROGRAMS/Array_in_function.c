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
	int i,flag=0,ind[5],j=0;
	for(i=0;i<5;i++)
	{
		if(x[i]==y)
		{
			ind[j]=i+1;
			flag+=1;
			j++;
		}
	}
	if(flag!=0)
	{
		printf("\nThe number %d is founded %d times:-\n",y,flag);
		for(j=0;j<flag;j++)
		{
			printf("\n%d Position is: %d\n",j+1,ind[j]);
		}
	}
	else
	{
		printf("\nNumber %d is not Presented in the Array : \n",y);
	}
}
