#include<stdio.h>
#include<string.h>
void main()
{
	char a[100];
	int len,alp=0,alp2=0,alp3=0,alp4=0,alp5=0,j,v=0,c=0;
	printf("enter any string:-");
	gets(a);
	len=strlen(a);
	for(j=0;j<=len;j++)
	{
		if(a[j]>='a' && a[j]<='z'|| a[j]>='A' && a[j]<='Z')
			if(a[j]=='a'|| a[j]=='e'|| a[j]=='i'|| a[j]=='o'|| a[j]=='u'|| a[j]=='A'|| a[j]=='E'|| a[j]=='I'|| a[j]=='O'|| a[j]=='U')
			{
				v+=1;
				if(a[j]=='a' || a[j]=='A')
				{
					alp+=1;
				}
				else if(a[j]=='e' || a[j]=='E')
				{
					alp2+=1;
				}
				else if(a[j]=='i' || a[j]=='I')
				{
					alp3+=1;
				}
				else if(a[j]=='o' || a[j]=='O')
				{
					alp4+=1;
				}
				else if(a[j]=='u' || a[j]=='U')
				{
					alp5+=1;
				}
			}
			else
			{
				c+=1;
			}
	}
	printf("no. of vowels into the given string:-%d\n",v);
	printf("\nno. of consonent into the given string:-%d\n",c);
	printf("\nvowel a is %d times founded into the given string.\n",alp);
	printf("\nvowel e is %d times founded into the given string.\n",alp2);
	printf("\nvowel i is %d times founded into the given string.\n",alp3);
	printf("\nvowel o is %d times founded into the given string.\n",alp4);
	printf("\nvowel u is %d times founded into the given string.\n",alp5);
	printf("\n length of string is: %d",len);
}
