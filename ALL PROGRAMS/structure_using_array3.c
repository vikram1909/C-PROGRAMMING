#include<stdio.h>
struct abc
{
	int roll;
	char nm[20];
	int marks;
};
void main()
{
	struct abc ob[100];
	int i,n;
	do
	{
		printf("Enter limit for records Between 1 to 100:-");
		scanf("%d",&n);
	}while(n>100 || n<=0);
	printf("Entre values for %d records:-\n",n);
	for(i=0;i<n;i++)
	{
		printf("Enter Record for %d Student \n",i+1);
		printf("Enter RollNo. :");
		scanf("%d",&ob[i].roll);
		printf("Enter Name :");
		scanf("%s",ob[i].nm);
		printf("Enter Marks :");
		scanf("%d",&ob[i].marks);
	}
	printf("\n***** Values are *****\n");
	printf("\nRollNo\t Name\t Marks\t Grade \n");
	for(i=0;i<n;i++)
	{
		if(ob[i].marks <= 100 && ob[i].marks >= 80)
		{
		    printf("%d\t %s\t %d\t A+\n",ob[i].roll,ob[i].nm,ob[i].marks);	
		}
		else if(ob[i].marks < 80 && ob[i].marks >= 60)
		{
		    printf("%d\t %s\t %d\t A\n",ob[i].roll,ob[i].nm,ob[i].marks);	
		}
		else if(ob[i].marks < 60 && ob[i].marks >= 50)
		{
		    printf("%d\t %s\t %d\t B\n",ob[i].roll,ob[i].nm,ob[i].marks);	
		}
		else if(ob[i].marks < 50 && ob[i].marks >= 30)
		{
		    printf("%d\t %s\t %d\t C\n",ob[i].roll,ob[i].nm,ob[i].marks);	
		}
		else if(ob[i].marks < 30 && ob[i].marks >= 0)
		{
		    printf("%d\t %s\t %d\t F\n",ob[i].roll,ob[i].nm,ob[i].marks);	
		}
	}
}

