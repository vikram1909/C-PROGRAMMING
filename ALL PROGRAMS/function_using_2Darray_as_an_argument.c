#include<stdio.h>
void accept(int [][3]);
void display(int (*)[3]);
void search(int [][3]);
int i,j;
void main()
{
	int arr[3][3];
	accept(arr);
	display(arr);
	search(arr);
}
void accept(int arr[][3])
{
	printf("Enter element for Array :-\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
}
void display(int (*arr)[3])
{
	printf("elements of Array are :-\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",*(*(arr+i)+j));
		}
		printf("\n\n");
	}
}
void search(int arr[][3])
{
	int n,row,col,flag=0;
	printf("enter that number to search :-");
	scanf("%d",&n);
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(arr[i][j]==n)
			{
				printf("\nnumber found at %d,%d position\n",i+1,j+1);
				printf("\nThat means number found at \n\nRow_number : %d  \nCollumn_no : %d\n",i+1,j+1);
				flag+=1;
			}
		}
	}
	if(flag==0)
		printf("\nNumber not found\n");
	else
		printf("\nthere are %d times number founded in the Matrix: \n",flag);
}
