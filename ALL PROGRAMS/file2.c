#include<stdio.h>
#include<stdlib.h>
void main()
{
	FILE *fp1,*fp2;
	int ch;
	fp1=fopen("vikram","r");
	fp2=fopen("solty","w");
	if(fp1==NULL)
	{
		printf("file note present");
    }
	else
	{
		printf("file opened in read mode:-\n");
	}
	while((ch=fgetc(fp1))!=EOF)
	{
		fputc(ch,fp2);
	}
	printf("copied");
	fclose(fp1);
	fclose(fp1);
}
