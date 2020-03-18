#include<stdio.h>
#include<math.h>
#define pi 3.14
main()
{
	int choice;
	printf("Enter\n1 for Triangle\n2 for Square\n3 for Circle\n4 for Rectangle\n5 for Parallelogram\n");
	ab:
	printf("\nEnter your Choice: ");
 	scanf("%d",&choice);
 	switch(choice)
	{
 		case 1: 
		{
 			int a,b,c;
 			char ch;
 			float s,area;
 			printf("Enter sides of triangle\n");
 			printf("enter 1st side: ");
 			scanf("%d",&a);
 			printf("enter 2nd side: ");
 			scanf("%d",&b);
 			printf("enter 3rd side: ");
 			scanf("%d",&c);
 			s=(a+b+c)/2;
 			area=(sqrt(s*(s-a)*(s-b)*(s-c)));
 			printf("Area of Triangle with sides %d,%d,%d is %.2f\n",a,b,c,area);
 			tri:
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
 				goto tri;
			}
 		}
 		case 2: 
		{
 			float side,area;
 			char ch;
 			printf("Enter Sides of Square: ");
 			scanf("%f",&side);
 			area=(float)side*side;
 			printf("Area of Square is %.2f\n",area);
 			squ:
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
 				goto squ;
			}
 		}
 		case 3:
		{
 			float radius,area;
 			char ch;
			printf("Enter Radius of Circle: ");
 			scanf("%f",&radius);
 			area=(float)pi*radius*radius;
 			printf("Area of Circle with radius %.2f is %.2f\n",radius,area);
 			crl:
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
 				goto crl;
			}
		}
 		case 4: 
		{
 			float len,breadth,area;
 			char ch;
			printf("Enter Length and Breadth of Rectangle\n");
			printf("Enter Length: ");
 			scanf("%f",&len);
 			printf("Enter Breadth: ");
 			scanf("%f",&breadth);
 			area=(float)len*breadth;
 			printf("Area of Rectangle is %.2f\n",area);
 			rec:
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
 				goto rec;
			}
		}
 		case 5: 
		{
 			float base,height,area;
 			char ch;
			printf("Enter base and height of Parallelogram\n");
 			printf("Enter Base: ");
 			scanf("%f",&base);
 			printf("Enter Height: ");
 			scanf("%f",&height);
 			area=(float)base*height;
 			printf("area of Parallelogram is %.2f\n",area);
 			par:
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
 				goto par;
			}
		}
 		default: 
		{
			char ch;
 			printf("Invalid Choice\n");
 			inv:
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
 				goto inv;
			}
		}
	}
}


