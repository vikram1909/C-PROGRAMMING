#include<stdio.h>
#include<stdlib.h>
struct record
{
	int rollNo;
	char name[50];
	int age;
	int marks;
};
void delete();
void delete()
{
	char ch;
	printf("Are You Sure ! You want to Delete the record..?  (Y/N) ");
	ch=getch();
	if(ch=='Y' || ch=='y')
	{
		remove("E:\\MCA_2019\\cpractice\\File\\database1.txt");
		printf("\nRecords Are Deleted Successfully....\n");
	}
}
void main()
{
	struct record rd;
	FILE *data;
	int choice;
	printf("Enter number\n1 for Enter Record\n2 for View Record\n3 for Update record\n4 for Delete Record\n");
	ab:
	printf("\nEnter Your Choice: ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
		{
			char ch;
			data=fopen("E:\\MCA_2019\\cpractice\\File\\database1.txt","w");
			if(data==NULL)
		 	{
			 	printf("Ther are some ERROR in opening File...please Check.");	
			}
			printf("Enter Rollno: ");
			scanf("%d",&rd.rollNo);
			printf("Enter Name: ");
			scanf("%s",rd.name);
			printf("Enter Age: ");
			scanf("%d",&rd.age);
			printf("Enter Marks: ");
			scanf("%d",&rd.marks);
			fprintf(data,"Rollno\tName\tAge\tMarks\n");
			fprintf(data,"%d\t%s\t%d\t%d\n",rd.rollNo,rd.name,rd.age,rd.marks);
			fclose(data);
			printf("Record Entered Successfully...\n");
		   	ent:
			printf("\nWould you like to continue (Y/N):");
 			ch=getch();
 			if(ch=='Y'|| ch=='y')
 			{
 				goto ab;
			}
			else if(ch=='N'|| ch=='n')
			{
				break;
			}
 			else
 			{
 				printf("\nEnvalid Entry....Please select only \"Y for Yes\" OR \"N for No\":\n");	
 				goto ent;
			}
		}
		case 2:
		{
			char c,ch;
			int n,pos;
			data=fopen("E:\\MCA_2019\\cpractice\\File\\database1.txt","r");
			if(data == NULL)
			{
				printf("File not Available...Please create a file:\n");
			}
			
			while(1)
			{
				pos=0;
				c=getc(data);
				if(c == EOF )
				{
				   if(pos==ftell(data))	
					{
						printf("No Records Found..Please Enter Some Records:");
						break;
					}
					else
					{
						break;
					}
				}
				else
				{
					printf("%c",c);	
				}
			}
			fclose(data);
		   	view:
			printf("\nWould you like to continue (Y/N): ");
 			ch=getch();
 			if(ch=='Y'|| ch=='y')
 			{
 				goto ab;
			}
			else if(ch=='N'|| ch=='n')
			{
				break;
			}
 			else
 			{
 				printf("\nEnvalid Entry....Please select only \"Y for Yes\" OR \"N for No\":\n");	
 				goto view;
			}
		}
		case 3:
		{
			char ch;
			data=fopen("E:\\MCA_2019\\cpractice\\File\\database1.txt","a");
			printf("Enter Rollno: ");
			scanf("%d",&rd.rollNo);
			printf("Enter Name: ");
			scanf("%s",rd.name);
			printf("Enter Age: ");
			scanf("%d",&rd.age);
			printf("Enter Marks: ");
			scanf("%d",&rd.marks);
			fprintf(data,"%d\t%s\t%d\t%d\n",rd.rollNo,rd.name,rd.age,rd.marks);
			fclose(data);
			printf("File Updated Successfully..\n");
		   	upd:
			printf("\nWould you like to continue (Y/N):");
 			ch=getch();
 			if(ch=='Y'|| ch=='y')
 			{
 				goto ab;
			}
			else if(ch=='N'|| ch=='n')
			{
				break;
			}
 			else
 			{
 				printf("\nEnvalid Entry....Please select only \"Y for Yes\" OR \"N for No\":\n");	
 				goto upd;
			}
		}
		case 4:
		{
			char ch;
			delete();
			del:
			printf("\nWould you like to continue (Y/N):");
 			ch=getch();
 			if(ch=='Y'|| ch=='y')
 			{
 				goto ab;
			}
			else if(ch=='N'|| ch=='n')
			{
				break;
			}
 			else
 			{
 				printf("\nEnvalid Entry....Please select only \"Y for Yes\" OR \"N for No\":\n");	
 				goto del;
			}
		}
	}
}
