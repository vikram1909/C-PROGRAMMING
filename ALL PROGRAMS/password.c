#include<stdio.h>
#include<conio.h>
void main()
{
	char pass[80],ch;
	int i=0;
	printf("Enter Password:");
	while((ch=getch())!='\r')
	{
		if(i==0 && ch=='\b')
		{
			continue;
		}
		if(ch=='\b')
		{
			printf("\b \b");
			i--;
			continue;
		}
		pass[i]=ch;
		i++;
		printf("*");
	}
	pass[i]='\0';
	printf("\nPassword: %s",pass);
}
