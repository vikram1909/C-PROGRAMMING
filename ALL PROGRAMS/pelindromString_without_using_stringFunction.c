#include<stdio.h>
#include<string.h>
void main()
{
	int len,i,f=0;
	char ch[20];
	printf("Enter a string : ");
	gets(ch);
	len=strlen(ch);
	for(i=0;i<len;i++)
	{
		if(ch[i]==ch[len-i-1])
		{
			f=f+1;
		}
	}
	if(len==f)
	{
		printf("\nString is Pelindrom : ");
	}
	else
	{
		printf("\nString is not Pelindrom :");
	}
}
