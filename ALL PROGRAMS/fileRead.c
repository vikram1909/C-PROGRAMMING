#include<stdio.h>
#include<stdlib.h>
void main()
{
	FILE *fp;
	int ch;
	fp=fopen("E:\\Cprogram\\record.txt","r");
	if(fp==NULL)
	{
		printf("file not presented:-");
	}
	else
	{
		while((ch=fgetc(fp))!=EOF)
		{
			printf("%c",ch);
		}
	}
	fclose(fp);
}
