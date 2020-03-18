#include<stdio.h>
struct abc
{
	int a;
	float b;
};
void main()
{
	struct abc ob[100];
	int i,n;
	do
	{
		printf("Enter limit for records Between 1 to 100:-");
		scanf("%d",&n);
	}while(n>100 || n<=0);
	printf("Entre values for %d records:-\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d%f",&ob[i].a,&ob[i].b);
	}
	printf("\n***** Values are *****\n");
	for(i=0;i<n;i++)
	{
		printf("A=%d\tB=%.2f\n",ob[i].a,ob[i].b);
	}
}
float * gg (float *tt)
{
	return tt;
}
