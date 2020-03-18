#include<stdio.h>
void main()
{
	char a;
	//char *p;
	int i,len,fl=0;
	printf("enter string:-");
	gets(a);
	//*p=a;
	len=strlen(a);
	for(i=0;i<len;i++)
	{
		if(a[i]==a[len-i-1])
		{
			fl=fl+1;
		}
	}
	if(len==fl)
	{
		printf("pelindrom\n");
	}
	else
	{
		printf("not pelindrom\n");
	}
}
