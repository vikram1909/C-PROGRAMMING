#include<stdio.h>
void main()
{
	float sal,hra,da,gr_sal;
	do{
		printf("Enter Your Salary: ");
	    scanf("%f",&sal);	
	}while(sal<=0);
	
	if(sal<=10000)
	{
		hra=sal*20/100;
		da=sal*80/100;
		gr_sal=sal+hra+da;
		printf("Your Gross salaey is: Rs. %.2f",gr_sal);
	}
	else if(sal<=20000)
	{
		hra=sal*25/100;
		da=sal*90/100;
		gr_sal=sal+hra+da;
		printf("Your Gross salaey is: Rs. %.2f",gr_sal);
	}
	else
	{
		hra=sal*35/100;
		da=sal*95/100;
		gr_sal=sal+hra+da;
		printf("Your Gross salaey is: Rs. %.2f",gr_sal);
	}
	
}
