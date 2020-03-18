#include<stdio.h>
void main()
{
	int n,m,i=0,j;
	float pri,r,t,interest,arr[5];
	do
	{
		printf("How many times you want to calculate the interest : ");
		scanf("%d",&n);
	}while(!(n>0 && n<=5));
	m=n;
	while(n>0)
	{
		printf("enter Principle : ");
		scanf("%f",&pri);
		printf("enter Rate : ");
		scanf("%f",&r);
		printf("enter Time : ");
		scanf("%f",&t);
		interest=(pri*r*t)/100;
		arr[i]=interest;
		n--;
		i++;
	}
	printf("\nInterest for %d times are listed bellow\n",m);
	for(j=0;j<m;j++)
	{
		printf("%d interest is : %.2f\n",j+1,arr[j]);
	}
}
