#include<stdio.h>
int main()
{
	int i,n;
	printf("enter the last number untill you want the square : ");
	scanf("%d",&n);
	printf("\nList of squares untill %d number :\n",n);
	printf("\nNo.\t \tSquare\n");
	for(i=1;i<=n;i++)
	{
		printf("%d\t=\t%d\n",i,i*i);	
	}
} 
