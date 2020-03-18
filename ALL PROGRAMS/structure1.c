#include<stdio.h>
void main()
{
	struct student
	{
		int r;
		char n[10];
		float avg;
		int age;
	};
	struct student m;
	printf("enter student's roll no. Name Average Age\n");
	scanf("%d%s%f%d",&m.r,&m.n,&m.avg,&m.age);
	printf("roll no.\tName\tAverage\tAge\n");
	printf("%d\t\t%s\t%.2f\t%d",m.r,m.n,m.avg,m.age);
}
