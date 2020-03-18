#include<stdio.h>
void main()
{
	int a,b;
	printf("enter 1st number:-");
	scanf("%d",&a);
	printf("enter 2nd number:-");
	scanf("%d",&b);
	a^=b^=a^=b;
	printf("\nAfter swaping 1st number become:-%d\n",a);
	printf("After swaping 2nd number become:-%d\n",b);
	a>>=4; //sort_hand operator
	printf("\nAfter Right_shifting 1st number become:-%d\n",a);
	b=b<<4;
	printf("After Left_shifting 2nd number become:-%d\n",b);
}
