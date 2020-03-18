#include<stdio.h>
#include<string.h>
void main()
{
	char str[50];
	int len,i,j,temp;
	printf("enter any string:-");
	gets(str);
	len=strlen(strupr(str));
	for(i=0;i<len-1;i++)
		for(j=i+1;j<len;j++)
			if(str[i]>str[j])
			{
			  temp=str[i];
			  str[i]=str[j];
			  str[j]=temp;
			}
			printf("after sorting string will be like:-%s",str);
		
}
