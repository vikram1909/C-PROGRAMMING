#include<stdio.h>
#include<stdlib.h>
void main()
{
	FILE *fp;
	int ch;
	fp=fopen("vowel","r");
	if(fp==NULL)
	{
		printf("file not presented:-");
	}
	else
	{
		while((ch=fgetc(fp))!=EOF)
		{
			printf("%c\t",ch);
		}
	}
	fclose(fp);
}
