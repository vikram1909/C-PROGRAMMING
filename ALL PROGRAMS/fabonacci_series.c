#include<stdio.h>
void main()
{
	int a=0,b=1,c,n,count=2;
	printf("enter limit of series:-");
	scanf("%d",&n);
	printf("%d\n%d\n",a,b);
	c=a+b;
	while(c<=n)
	{
		printf("%d\n",c);
		a=b;
		b=c;
		c=a+b;
		count+=1;
	}
	printf("\nLength of series:-%d",count);
}
