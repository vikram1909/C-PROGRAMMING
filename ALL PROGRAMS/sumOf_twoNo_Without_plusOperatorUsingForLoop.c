#include<stdio.h>
int main()
{
	 int a,b,i;
	 printf("enter 1st number :");
	scanf("%d",&a);
	printf("enter 2nd number :");
	scanf("%d",&b);
	
	int x=a;int z=b;
	for(i=1;i<=b;i++)
	{
		a++;
	}
		printf("sum of %d and %d is : %d",x,z,a);
	return 0;
}
