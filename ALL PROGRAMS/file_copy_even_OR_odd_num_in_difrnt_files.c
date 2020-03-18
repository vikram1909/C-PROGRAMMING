#include<stdio.h>
void main()
{
	FILE *f1,*f2,*f3;
	int num[100],i,limit,flag1=0,flag2=0;
	char c;
	f1=fopen("E:\\Cprogram\\file1.txt","w"); 
	f2=fopen("E:\\Cprogram\\evenFile.txt","w");
	f3=fopen("E:\\Cprogram\\oddFile.txt","w");
	if(f1==NULL)
	{
		printf("error while opening file.");
	}
	do
	{
		printf("enter limit for array: ");
		scanf("%d",&limit);
	}while(limit>100 || limit<0);
	printf("enetr array elements upto %d : \n",limit);
	for(i=0;i<limit;i++)
	{
		printf("enter element %d : ",i+1);
		scanf("%d",&num[i]);
		fprintf(f1,"%d\n",num[i]);
		if(num[i]%2==0)
		{
			fprintf(f2,"%d\n",num[i]);
			flag1+=1;
		}
		else
		{
			fprintf(f3,"%d\n",num[i]);
			flag2+=1;
		}
	}
	printf("\nthere are %d even numbers are coppied in evenFile\n",flag1);
	printf("\nthere are %d odd numbers are coppied in oddFile\n",flag2);
	fclose(f1);
	fclose(f2);
	fclose(f3);
}
