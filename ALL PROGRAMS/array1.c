#include<stdio.h>
void main()
{
	int a[10];
	int i,n,g;
	do
	{
		printf("enter a  number for limit which is upto 10:-");
		scanf("%d",&n);
	}while(n>=11 || n<=0);
		printf("enter %d values:-\n",n);
		for(i=0;i<n;i++)
		{
	    	scanf("%d",&a[i]);
		}
		g=a[0];
		//printf("your values are:-\n");
		for(i=0;i<n;i++)
		{
			if(g<=a[i])
			{
				g=a[i];
			}
			
		}
		printf("the geatest value is:-%d",g);
}
