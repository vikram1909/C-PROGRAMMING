#include<stdio.h>
#include<string.h>
void main()
{
	char a[10],copy[10];
	int len,i,b;
	printf("enter a String :-");
	scanf("%s",a);
	len=strlen(a);
	for(i=0;i<len;i++)
	{
		copy[i]=a[i];
	}
	printf("A :- %s\n",a);
	printf("Copy :- %s\n",copy);
}
