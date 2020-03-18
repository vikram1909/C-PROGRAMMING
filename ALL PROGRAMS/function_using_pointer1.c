#include<stdio.h>
void main()
{
	int sum(int,int);
	int mult(int,int);
	int r,n,m;
	int (*p)(int,int)=&sum;
	printf("enter two numbers:-");
	scanf("%d %d",&n,&m);
	r=(*p)(n,m);
	printf("r=%d\n",r);
	p=&mult;
	printf("\nmultiplication=%d\n",(*p)(n,m));
}
int sum(int x,int y)
{
	return (x+y);
}
int mult(int x,int y)
{
	return (x*y);
}
