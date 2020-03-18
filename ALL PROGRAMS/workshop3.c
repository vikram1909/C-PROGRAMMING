#include<stdio.h>
void main()
{
	int a=10,b=20,n;
	a=a*b;
	b=a/b;
	a=a/b;
	printf("after swapping %d %d\n",a,b);
	b=(a+b)-(a=b);
	printf("\nafter swapping %d %d\n",a,b);
	a^=b^=a^=b;
	printf("\nafter swapping %d %d\n",a,b);
	printf("%d",printf("he\0she\n"));
	printf("%d\n",printf("he_she\n"));
	n=scanf("%d %d",&a,&b);
	printf("%d",n);
}
