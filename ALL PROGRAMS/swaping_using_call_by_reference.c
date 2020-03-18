#include<stdio.h>
void swap(int *,int *);
void main()
{
	int n1,n2;
	printf("enter 1st number : ");
	scanf("%d",&n1);
	printf("enter 2nd number : ");
	scanf("%d",&n2);
	swap(&n1,&n2);
}
void swap(int *n1,int *n2)
{
	int temp;
	temp=*n1;
	*n1=*n2;
	*n2=temp;
	printf("\n....... : After Swaping :.......\n\n\t1st Number = %d\n\t2nd Number = %d",*n1,*n2);
}
