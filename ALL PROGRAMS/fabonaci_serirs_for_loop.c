#include<stdio.h>
void main()
{
	int i,a,b,c,n,count=2;
	printf("enter that number which is the limit of the series:-");
	scanf("%d",&n);
	a=0;
	b=1;
	printf("%d\n%d\n",a,b);
	for(i=1;i<n;i++)
	{
		c=a+b;
		a=b;
		b=c;
		printf("%d\n",c);
		count+=1;
	}
     printf("Length of series is:- %d",count);
}
