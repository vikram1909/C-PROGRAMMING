#include<stdio.h>
void main()
{
	int a[100],i,n;
	int *gtr,*arr;
	do
	{
		printf("enter the limit of array:-");
		scanf("%d",&n);
	}while(n>=101 || n<=0);
	printf("\nenter %d values:-\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
    
	printf("\nentered %d values are:-\n",n);
	for(i=0;i<n;i++)
	{
		arr=&a[i];
		printf("%d\t",*arr);
	}
	gtr=&a[0];
	for(i=1;i<n;i++)
	{
		if(*gtr<=a[i])
		
			*gtr=a[i];
		
	}
	printf("\n\nthe greatest value in given numbers is:-%d",*gtr);
	printf("\n\nthe address of greatest value in given numbers is:-%X",gtr);
	printf("\n\n%%u is used for display address in decimal\n\n%%x for hexadecimal in lower case,\n\n%%X for hexadecimal in upper case and \n\n%%p for hexadecimal including zeros}");
}
