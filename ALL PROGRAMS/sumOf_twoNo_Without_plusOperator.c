#include<stdio.h>
int main()
{
	 int a,b;
	 printf("enter 1st number :");
	scanf("%d",&a);
	printf("enter 2nd number :");
	scanf("%d",&b);
	
	int x=a;int z=b;
	while(a != 0)
	{
		b++;
		a--;
	}
		printf("sum of %d and %d is : %d",x,z,b);
	return 0;
}
