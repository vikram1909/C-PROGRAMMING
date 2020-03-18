#include<stdio.h>
void main()
{
		long i,m,f=1;
        long sum   ,n;
        printf("enter a no :-");
        scanf("%d",&n);
	while(n>0)
	{
		
		 m=n%10;
    	for(i=m;i>=1;)
		{
			f=f*m;
			i--;
		}
		sum=sum+f;
		n=n/10;
	}
	printf("%d %d",n,f);
}
