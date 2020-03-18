#include<stdio.h>
void show(FILE *);
void show(FILE *f)
{
	char c;
	while((c=fgetc(f)) != EOF)
	{
		printf("%c",c);
	}
}
void main()                             /*  file name must be like [E:\\Cprogram\\fileName.txt]   */
{										/* {Becouse all files presented in "Cprogram" folder which locatted in "E:" drive.} */
	FILE *fp1;
	char file_name[100];
	printf("Enter File Name to be Open : ");
	scanf("%s",&file_name);
	fp1=fopen(file_name,"r");
	if(fp1==NULL)
	{
		printf("\nFile does not Exist please enter correct file name :");
	}
	show(fp1);
	fclose(fp1);
}
