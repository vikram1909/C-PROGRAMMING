#include<stdio.h>
#include<stdlib.h>
struct record
{
	int id;
	char name[20];
	int age;
	char ad[20];
	int marks;
};
void desp(FILE *f);
void desp(FILE *f)
{
	char g;
	while((g=fgetc(f)) != EOF)
	{
		printf("%c",g);
	}
}
void main()
{
	struct record rd;
	FILE *fp1;//*fp2;
	char ch;
	fp1=fopen("E:\\Cprogram\\record.txt","w");
	if(fp1==NULL)
	{
		printf("error");
		exit(0);
	}
	fprintf(fp1,"Id\tName\tAge\tAddress\tMarks\n");
	while(1)
	{
		printf("enter id: ");
		scanf("%d",&rd.id);
		printf("enter Name: ");
		scanf("%s",rd.name);
		printf("enter Age: ");
		scanf("%d",&rd.age);
		printf("enter address: ");
		scanf("%s",rd.ad);
		printf("enter Marks: ");
		scanf("%d",&rd.marks);
		fprintf(fp1,"%d\t%s\t%d\t%s\t%d\n",rd.id,rd.name,rd.age,rd.ad,rd.marks);
		printf("Do you want to Continue (Y/N):\n ");
		ch=getch();
		if(ch=='N'|| ch=='n')
		{ 
			  
			break;
		}	
    }
  	fclose(fp1);
  	fp1=fopen("E:\\Cprogram\\record.txt","r");
  	printf("\nContents of the File are : \n");
	desp(fp1);
	fclose(fp1);
}
