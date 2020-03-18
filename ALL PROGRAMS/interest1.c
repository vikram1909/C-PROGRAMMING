#include<stdio.h>
void main()
{
	int m,n,i;
	float arr[5],pri,t,r,interest;
	do
	{
		printf("Enter how many times you want to calculate interest : ");
		scanf("%d",&n);
	}while(!(n>0 && n<=5));
	printf("\nPlease enter %d times Principle , Time And Rate to calculate the interest..\n",n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter Principle , Time & Rate for %dth interest : \n",i+1);
		printf("Principle : ");
		scanf("%f",&pri);
		printf("Time : ");
		scanf("%f",&t);
		printf("Rate : ");
		scanf("%f",&r);
		interest=(pri*t*r)/100;
		arr[i]=interest;
	}
	printf("\nList of interests for %d times are given bellow : \n");
	for(i=0;i<n;i++)
	{
		printf("%d interest is : %.2f\n",i+1,arr[i]);
	}
}
