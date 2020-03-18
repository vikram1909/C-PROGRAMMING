#include<stdio.h>
int a=1,n,s=0;
void series();
void main()
{
	printf("enter the number:-");
	scanf("%d",&n);	
	while(a<=10)
	series();
	printf("\nsum of given table:-%d",s);
}
void series()
{
	int t=0;
	t=a*n;
	s=s+t;
	printf("%d * %d = %d\n",n,a,t);
	a++;
}

