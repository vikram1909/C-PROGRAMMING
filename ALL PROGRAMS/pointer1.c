#include<stdio.h>
int fact(int);
void main()
{
	int r,n;
	int(*p)(int);
	p=&fact;
	printf("enter any number to find it's factorial:-");
	scanf("%d",&n);
	//r=fact(n);
	r=(*p)(n);
	printf("factorial of number is:-%d",r);
}
int fact(int x)
{
	int f=1;
	while(x>0)
	{
		f=f*x;
		x--;
    }
	return f;
}
