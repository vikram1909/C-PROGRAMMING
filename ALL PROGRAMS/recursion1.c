#include<stdio.h>
int rev(int);
void main()
{
	int n,r;
	printf(" enter any number:-");
	scanf("%d",&n);
	r=rev(n);
	printf("\n after reverse the number will be like:-%d\n",r);
	 if(n==r)
   {
   		printf("\n number is pelindrom:- %d = %d",n,r);
   }
   else
   {
   		printf("\n number is not pelindrom:- %d = %d",n,r);
   }
}
int rev(int n)
{
	static int i=0;
	if(n==0)
	{
	 	return 0;
    }
    else
    {
	   
		i=i*10;
		i=i+n%10;
		rev(n/10);
    	return i;
   }
}
