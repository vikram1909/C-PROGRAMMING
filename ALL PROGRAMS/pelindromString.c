#include<stdio.h>
#include<string.h>
void main()
{
	char a[50],b[50];
	printf("enter any strimg:-");
	gets(a);
	strcpy(b,a);
	strrev(b);
	if(strcmp(a,b)==0)
	{
		printf("string is pelimdrom");
	}
	else
	{
		printf("string is not pelimdrom");
	}
}
