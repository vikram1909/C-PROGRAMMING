//nested structure
#include<stdio.h>
struct employee
{
		int id;
  		char nm[20];
		int age;
		char add[20];
};
struct company
{
	int d;
	int m;
	int y;
	struct employee emp;
};
void display(struct company);
void main()
{
	struct company com;
	printf("enter employee's information like id,name,age,add:-\n");
	scanf("%d%s%d%s%d%d%d",&com.emp.id,com.emp.nm,&com.emp.age,com.emp.add);
	display(com);
}
void display(struct company com)
{
	printf("id\tName\tAge\tD.O.B\n");
	printf("%d\t%s\t%d\t%s\t%d/%d/%d",com.emp.id,com.emp.nm,com.emp.age,com.emp.add);
}

