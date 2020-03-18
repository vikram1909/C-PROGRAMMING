#include<stdio.h>
void main()
{
	int *ptr1,*ptr2,*ptr3,a,b,c;
	printf("enter values for A & B :-\n");
	scanf("%d%d",&a,&b);
	ptr1=&a;
	ptr2=&b;
	ptr3=&c;
	printf("Arithimetical operation on Pointer :-\n");
	*ptr3=*ptr1+*ptr2;
	printf("\nsum of A & B is : %d\n",*ptr3);
	*ptr3=*ptr1-*ptr2;
	printf("\ndifference of A & B is : %d\n",*ptr3);
	*ptr3=*ptr1**ptr2;
	printf("\nmultiplication of A & B is : %d\n",*ptr3);
	*ptr3=*ptr1%*ptr2;
	printf("\nvalue of c (remainder) is : %d\n",*ptr3);
}
