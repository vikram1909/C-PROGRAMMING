#include<stdio.h>
void main()
{
	int i,n,per=0;
	printf("Enter any +ve number to check whether number is perfect or not : ");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if(n % i == 0)
		{
			per=per+i;
		}
	}
	if(n==per)
		printf("\nentered number %d is perfect number :",n);
	else
		printf("\nentered number %d is not perfect number :",n);
}
