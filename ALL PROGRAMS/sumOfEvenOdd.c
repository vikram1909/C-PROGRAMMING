#include<stdio.h>
void main()
{
	int a[10];
	int i,n,ev,odd,sev=0,sodd=0;
	do
	{
		printf("enter the limit upto 10 :-");
		scanf("%d",&n);
	}while(n>=11 || n<=0);
		printf("enter %d values:-\n",n);
		for(i=0;i<n;i++)
		{
		scanf("%d",&a[i]);
		}
		//printf("your values are:-\n");
		for(i=0;i<n;i++)
		{
			if(a[i]%2==0)
			{
				ev=a[i];
				sev=sev+ev;
			}
			else
			{
				odd=a[i];
				sodd=sodd+odd;
			}
		}
		printf("Sum of even is :-%d\n",sev);
		printf("Sum of odd is:-%d",sodd);
}
