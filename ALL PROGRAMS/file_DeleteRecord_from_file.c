#include<stdio.h>
#include<stdlib.h>
void show(FILE *f);
void show(FILE *f)
{
	char c;
	while((c=fgetc(f)) != EOF)
	{
		printf("%c",c);
	}
}
void main()
{
	FILE *fp1,*fp2;
	char fileName[100];
	char lines[100];
	int del_line_no;
	int line_no=0;
	printf("\nenter the Name of the file with path and extention :");
	scanf("%s",fileName);
	fp1=fopen(fileName,"r");
	if(fp1==NULL)
	{
		printf("\nthis File does not exist..please enter correct name of file :\n");
		exit(0);
	}
	printf("\nthese are the records %s of  file :\n",fileName);
	show(fp1);
	rewind(fp1);
	
	printf("\nenter no. of the line to be deleted : ");
	scanf("%d",&del_line_no);
	
	fp2=fopen("duplicate.txt","w");	
	while(fgets(lines,99,fp1) != NULL)
	{
		line_no++;
		if(line_no!=del_line_no)
		{
			fputs(lines,fp2);
		}	
	}
	fclose(fp1);
	fclose(fp2);
	remove(fileName);
	rename("duplicate.txt",fileName);
	fp1=fopen(fileName,"r");
	printf("\nthese are the records of %s file after performing delete operation :\n",fileName);
	show(fp1);
	fclose(fp1);
}
