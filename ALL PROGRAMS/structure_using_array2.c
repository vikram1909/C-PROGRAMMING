#include<stdio.h>
struct student
{
	int id;
	char nm[20];
	int age;
	char add[20],mob[10];
};
void main()
{
	struct student st[100];
	int i,n;
	do
	{
		printf("Enter Limit for student's records Between 1 to 100:-");
		scanf("%d",&n);
	}while(n>100 || n<=0);
	printf("Enter records for %d students:-\n And records will be like id,name,age,address,mobile no.\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d%s%d%s%s",&st[i].id,st[i].nm,&st[i].age,st[i].add,st[i].mob);
	}
	printf("ID\tName\tAge\tAddress\tMobile no.\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t%s\t%d\t%s\t%s\n",st[i].id,st[i].nm,st[i].age,st[i].add,st[i].mob);
	}

}
