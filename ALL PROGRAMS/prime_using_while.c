#include<stdio.h>
#include<math.h>
void main()
{
	int n,i=2,f=1;
	printf("enter the number:-");
	scanf("%d",&n);
	//while(i<n) 
    //while(i<n/2) 
    while(i< sqrt(n))
	{
		if(n%i==0) 
		{
			f=0;
			break;
		}
		i+=1;
	}
	if(f==0)
	{
		printf("no is not prime");
	}
	else
	{
		printf("no is prime");
	}
}
