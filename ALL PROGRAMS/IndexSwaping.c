#include<stdio.h>
#include<string.h>
void main()
{
	char a[50],temp;
	int i,j,k,len;
	printf("enter any string:-");
	gets(a);
	len=strlen(a);
	for(i=0;i<len;i=i+4)
	{
		j=i+2;
		if(j<len)
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
		else
		{
			break;
		}
	}
	for(i=1;i<len;i=i+4)
	{
		k=i+2;
		if(k<len)
		{
			temp=a[i];
			a[i]=a[k];
			a[k]=temp;
		}
		else
		{
			break;
		}
	}
	printf("after swaping string is:-%s",a);
}
