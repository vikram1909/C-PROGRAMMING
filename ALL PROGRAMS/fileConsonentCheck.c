#include<stdio.h>
#include<stdlib.h>
void main()
{
	FILE *fp;
	int ch;
	fp=fopen("E:\\MCA_2019\\cPractice\\File\\database1.txt","r");
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
