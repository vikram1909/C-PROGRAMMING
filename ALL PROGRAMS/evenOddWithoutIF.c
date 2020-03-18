#include<stdio.h>
void main()
{
	int n;
	printf("enter any number:-");
	scanf("%d",&n);
	(n%2==0) && printf("number is even");
	(n%2!=0) && printf("number is odd");
}
