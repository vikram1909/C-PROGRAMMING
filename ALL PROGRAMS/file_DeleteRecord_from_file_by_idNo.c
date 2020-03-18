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
	FILE *fp1,*fp2;
	char ch;
	int choice;
	printf("Please Enter\n\n1 for Insert record\n2 for Show records\n3 for update records\n4 for Delete record\n\nEnter your Choice : ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
		{
			fp1=fopen("E:\\Cprogram\\record3.txt","w");
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
  			fp1=fopen("E:\\Cprogram\\record3.txt","r");
  			printf("\nContents of the File are : \n");
			desp(fp1);
			fclose(fp1);
			break;
		}
		case 2:
		{
			fp1=fopen("E:\\Cprogram\\record3.txt","r");
  			printf("\nContents of the File are : \n");
			desp(fp1);
			fclose(fp1);
			break;
		}
		case 3:
		{
			fp1=fopen("E:\\Cprogram\\record3.txt","a");
			if(fp1==NULL)
			{
				printf("error");
				exit(0);
			}
			//fprintf(fp1,"Id\tName\tAge\tAddress\tMarks\n");
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
  			break;
		}
		case 4:
		{
			int del_id,c=0;
			fp1=fopen("E:\\Cprogram\\record3.txt","r");
			fp2=fopen("E:\\Cprogram\\temp.txt","a");
			printf("\nContents of the File are : \n");
			desp(fp1);
			printf("\nEnter the id whose records to be deleted : ");
			scanf("%d",&del_id);
			while(fscanf(fp1,"%d\t%s\t%d\t%s\t%d\n",&rd.id,rd.name,&rd.age,rd.ad,&rd.marks)!=EOF)
			{
				if(del_id!=rd.id)
				{
					fprintf(fp2,"%d\t%s\t%d\t%s\t%d\n",rd.id,rd.name,rd.age,rd.ad,rd.marks);
				}
				else
				{
					c=c+1;
				}
			}
			printf("%d record has been deleted",c);
			fclose(fp1);
			fclose(fp2);
		}	
	}
}
