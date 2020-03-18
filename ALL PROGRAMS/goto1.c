#include<stdio.h>
int main()
{
	int x;
	printf("enter any number:-");
	scanf("%d",&x);
	if(x%2==0)
	{
		printf("number is even");
		goto mn;
	}
	printf("number is odd");
	mn:
    return 0;
}
