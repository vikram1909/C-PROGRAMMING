#include<stdio.h>
int arm(int);
int main()
{
	int n,r;
	printf("Enter a Number :-");
	scanf("%d",&n);
	r=arm(n);
	printf("\nResult After operation on Entered number %d is %d\n",n,r);
	if(n==r)
		printf("\nHere number %d is equals to %d\n\n\tSo %d is a Armstrong number\n",n,r,n);
	else
		printf("\nHere number %d is not equals to %d\n\n\tSo %d is not a Armstrong number\n",n,r,n);
}
int arm(int n)
{
	int d,sum=0;
	while(n>0)
	{
		d=n%10;
		sum=sum+d*d*d;
		n=n/10;
	}
	return sum;
}
