#include<stdio.h>
void main()
{
		int a[10],b[10],i,j,count=0;
		printf("enter 1st array elements:-\n");
		for(i=0;i<5;i++)
		{
			scanf("\n%d\n",&a[i]);
		}
		printf("enter 2nd array element:-\n");
		for(j=0;j<5;j++)
		{
			scanf("\n%d\n",&b[j]);
		}
		printf("numbers that matched are listed here");
		for(i=0;i<5;i++)
		{
				for(j=0;j<5;j++)
				{
					if(a[i]==b[j])
					{
						printf("\n%d\n",a[i]);
						count++;
					}
				}
		}
		printf("no. of matched numbers are:- %d",count);
		getch();
}
