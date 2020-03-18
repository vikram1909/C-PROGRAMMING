#include<stdio.h>
int main()
{
	int i=1,n;
	printf("inter the limit:-");
	scanf("%d",&n);
	abc:
		printf("%d\n",i);
		i+=1;
		if (i<=n)
		{
			goto abc;
		}
	return 0;	
}
